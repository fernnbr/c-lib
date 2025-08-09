int  ft_tolower(int c)
{
	if (c == EOF || c < 0 || c > 255)
		return (c);
	c = (unsigned char)c;
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
