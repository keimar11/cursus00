/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:00:14 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 02:00:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char *str;
// 	const char *src;
// 	short	num1[] = { 10, 20, 30 };
// 	short	num2[] = { 10, 20, 30 };

// 	str = "I have a pen.";
// 	src = "I have an apple.";

// 	printf ("ft: %d\n", ft_memcmp(str, src, 15));
// 	printf ("or: %d\n", memcmp(str, src, 15));
// 	printf ("ft: %d\n", ft_memcmp(num1, num2, 15));
// 	printf ("or: %d\n", memcmp(num1, num2, 15));
// }
