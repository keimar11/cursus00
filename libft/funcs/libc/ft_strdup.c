#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*scr;
	int		i;
	int		strl;

	strl = ft_strlen (str);
	if (strl == 0)
		return (0);
	scr = (char *)malloc (sizeof(char) * strl + 1);
	i = 0;
	while (str[i])
	{
		scr[i] = str[i];
		i++;
	}
	scr[i] = 0;
	return (scr);
}
