size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	t_src;
	unsigned int	i;

	t_src = 0;
	i = 0;
	while (src[t_src] != '\0')
	{
		t_src ++;
	}
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize -1))
		{
			dst[i] = src [i];
			i ++;
		}
		dst[i] = '\0';
	}
	return (t_src);
}