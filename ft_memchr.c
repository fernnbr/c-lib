void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	to_find;
	unsigned size_t	i;

	p = (unsigned char *)s;
	to_find = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == to_find)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
