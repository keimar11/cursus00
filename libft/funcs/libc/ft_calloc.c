#include <stdlib.h>
#include <stdio.h>

#define NULL ((void *)0)

void	*ft_calloc(int n, int size)
{
	void	*save;
	void	*p;
	int		i;

	if (n == 0 || size == 0)
	{
		save = malloc (1);
		save = NULL;
		return (save);
	}
	save = (void *)malloc(n * size);
	p = save;
	if (save == NULL)
		return (NULL);
	i = 0;
	while (i < n * size)
	{
		save = NULL;
		save++;
		i++;
	}
	return (p);
}

int	main()
{
	int i, * ptr, sum = 0;
	ptr = (int *)ft_calloc(10, sizeof(int));

	// ptr = (int *)calloc(10, sizeof(int));

	if (ptr == NULL)
	{
		printf("Error! memory not allocated.");
		exit(0);
	}
	printf("Building and calculating the sequence sum of the first 10 terms \n");
	for (i = 0; i < 10; ++i) 
	{
		printf("a");
		* (ptr + i) = i;
		printf ("%d\n", *(int *) ptr + i);
		sum += * (ptr + i);
	}
	printf("Sum = %d", sum);
	free(ptr);
	return 0;
}