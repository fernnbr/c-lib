void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	if (n == 0)
		return ;
	ptr = (char *)s;
	while (n-- > 0)
		*ptr++ = 0;
}
