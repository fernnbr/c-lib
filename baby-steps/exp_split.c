ft_split("Hello world 42", ' ') 
// -> ["Hello", "world", "42", NULL]

static int	count_words(const char *s, char c)
{
	int	count;     // how many words found so far
	int	in_word;   // flag: 0 if currently outside a word, 1 if inside

	count = 0;
	in_word = 0;
	while (*s)  // loop until null terminator
	{
		if (*s != c && in_word == 0)  // found start of a new word
		{
			count++;      // increase word count
			in_word = 1;  // mark that we are now inside a word
		}
		else if (*s == c) // delimiter found
			in_word = 0;  // mark that we are now outside a word
		s++; // move to next character
	}
	return (count);
}

static char	*copy_word(const char *start, int len)
{
	char	*word;
	int		i;

	word = (char *)malloc((len + 1) * sizeof(char)); // +1 for null terminator
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)  // copy len characters from 'start' into 'word'
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0'; // null terminate
	return (word);
}

static void	free_split(char **array, int i)
{
	while (i > 0) // free all previously allocated strings
	{
		i--;
		free(array[i]);
	}
	free(array); // free the array itself
}

static int	extract_words(char **result, const char *s, char c)
{
	int	i;   // index into result array
	int	len; // length of current word

	i = 0;
	while (*s) // loop until end of string
	{
		if (*s != c) // found the start of a word
		{
			len = 0;
			while (s[len] && s[len] != c) // count length until delimiter or end
				len++;
			result[i] = copy_word(s, len); // allocate and copy this word
			if (!result[i]) // allocation failed
			{
				free_split(result, i); // clean up previous words
				return (0);           // signal failure
			}
			i++;        // move to next position in result array
			s += len;   // skip past this word
		}
		else
			s++; // skip delimiter
	}
	result[i] = NULL; // null-terminate the array
	return (1);       // success
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words_count;

	if (!s) // null pointer safety
		return (NULL);

	words_count = count_words(s, c); // count how many words
	result = (char **)malloc((words_count + 1) * sizeof(char *)); 
	// +1 for the NULL pointer at the end
	if (!result)
		return (NULL);

	if (!extract_words(result, s, c)) // fill result array
	{
		return (NULL); // allocation failure handled inside extract_words
	}
	return (result);
}

