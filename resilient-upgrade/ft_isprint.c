int ft_isprint(int c)
{
	if (c == EOF || c < 0 || c > 255)
		return 0;
	c = (unsigned char)c;
	return (c >= 32 && c <= 126);
}
