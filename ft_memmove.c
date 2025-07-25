void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = NULL;
	s = NULL;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (dst);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
	d += n;
	s += n;
		while (n--)
		*--d = *--s;
	}
	return (dst);
}
