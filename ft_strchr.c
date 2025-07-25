char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	char_to_find;

	ptr = (char *)s;
	char_to_find = (char)c;
	while (*ptr != '\0')
	{
		if (*ptr == char_to_find)
		{
			return (ptr);
		}
		ptr++;
	}
	if (char_to_find == '\0')
	{
		return (ptr);
	}
	return (NULL);
}
