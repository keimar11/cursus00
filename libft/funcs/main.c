#include <stdio.h>
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

int	main()
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_tolower('4'));
	printf("%s\n", ft_strchr("im a iron man!", 'i'));
	printf("%s\n", ft_strrchr("im a iron man!", 'i'));
}