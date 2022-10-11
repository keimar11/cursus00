#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, int len)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	k = 0;

	printf ("%c\n", little[3]);

	while (k < len && *big != 0)
	{
		i = k;
		printf ("%s\n", big);
		// j = 0;
		while (big[i] == little[j])
		{
			i++;
			j++;
		}
		printf ("%s\n", big);
		if (little[j] == 0)
			return ((char *)big);
		k++;
		big++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "oo";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 3);
	printf("ft : %s\n", ptr);
	ptr = strnstr(largestring, smallstring, 3);
	printf("or : %s\n", ptr);
}