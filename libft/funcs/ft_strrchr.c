char	*ft_strrchr(const char *s, int c)
{
	while (*s != 0)
	{
		if (*s == c)
			return ((char *)s);	//remove const
		s++;
	}
	return (0);
}