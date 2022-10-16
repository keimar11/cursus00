#include <stdio.h>
int	ft_isprint(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);

int main()
{
	printf ("%d\n", ft_isalnum(1));
	printf ("%d\n", ft_isdigit(1));
	printf ("%d\n", ft_isascii(1));
	printf ("%d\n", ft_isprint(1));
	printf ("%d\n", ft_isalpha(1));
}