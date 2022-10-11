#include <stdio.h>

void	ft_bzero(void *s, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s = 0;
		s++;
		i++;
	}
	// printf("%s\n", (char *)s);
	// while (i < 5)
	// {
	// 	i++;
	// 	s++;
	// }
	// printf("%s\n", (char *)s);
}

int main(void)
{
	void	*s;

	s = "keity";
	ft_bzero(s, 3);
}

/*
	s_byte > n のとき、nバイト以降のメモリは0になっていないか確認したい。
*/