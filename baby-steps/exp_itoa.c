static size_t	ft_count_digit(long int n)
{
	size_t	len;

	len = 0;

	// Account for negative sign or zero
	if (n <= 0)
		len++;  

	// Count digits by dividing by 10 until n becomes 0
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}


char	*ft_itoa(int n)
{
	char		*str;
	size_t		int_size;
	size_t		index;
	long int	nb;

	nb = n; // cast to long to handle INT_MIN safely
	int_size = ft_count_digit(n); // number of characters needed
	str = (char *)ft_calloc((int_size + 1), sizeof(char)); // +1 for null terminator
	if (str == NULL)
		return (NULL); // allocation failed

	index = int_size - 1; // start filling from the end

	if (nb < 0) // handle negative numbers
	{
		str[0] = '-'; // first character is '-'
		nb *= -1;      // make number positive for digit extraction
	}

	if (nb == 0)
		str[0] = '0'; // special case for 0

	while (nb > 0) // fill digits from the end
	{
		str[index--] = (nb % 10) + '0'; // get last digit as char
		nb /= 10;                        // remove last digit
	}

	return (str); // return the new string
}
