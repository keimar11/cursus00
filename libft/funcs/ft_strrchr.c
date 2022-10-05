char	*ft_strrchr(const char *s, int c)
{
	char *save;

	save = 0;
	while (*s != 0)
	{
		if (*s == c)
			save = (char *) s;
		s++;
	}
	return save;
}