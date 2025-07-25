void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p_s;

	p_s = NULL;
	p_s = (unsigned char *)s;
	while (n--)
		*p_s++ = (unsigned char)c;
	return (s);
}
