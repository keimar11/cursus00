#include <stdio.h>

int	test(int i)
{
	return (i -9223372036854775809);
}

int	main(void)
{
	int	i;

	i = 0;
	return (test(i));
}

