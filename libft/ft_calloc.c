/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:41:19 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 01:41:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*save;

	if (n <= 0 || size <= 0 || n * size >= __SIZE_MAX__)
	{
		save = malloc (1);
		if (!save)
			return (NULL);
		ft_bzero (save, 1);
		return (save);
	}
	save = (void *)malloc(n * size);
	if (!save)
		return (NULL);
	ft_bzero (save, n * size);
	return (save);
}

// int	main()
// {
// 	int i, * ptr, sum = 0;
// 	ptr = (int *)ft_calloc(10, sizeof(int));

// 	if (ptr == NULL)
// 	{
// 		printf("Error! memory not allocated.");
// 		exit(0);
// 	}
// 	printf("Calculate the sequence sum of the first 10 terms \n");
// 	for (i = 0; i < 10; ++i) 
// 	{
// 		printf("a");
// 		* (ptr + i) = i;
// 		printf ("%d\n", *(int *) ptr + i);
// 		sum += * (ptr + i);
// 	}
// 	printf("Sum = %d", sum);
// 	free(ptr);
// 	return 0;
// }