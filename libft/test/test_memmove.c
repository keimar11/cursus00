/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:00:15 by marvin            #+#    #+#             */
/*   Updated: 2022/11/03 22:00:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst[] = "abcdefghijk";
	char src[] = "kjihgfedcba";
	// printf("%p\n", memmove(((void *)0), ((void *)0), 0));
	// printf("%p\n", memmove(((void *)0), ((void *)0), 6));
	// printf("%p\n", memmove(dst, src, 1));
	// printf("%p\n", memmove(((void *)0), dst, 1));
	// printf("%p\n", memmove(dst, ((void *)0), 1));
	// printf("%p\n", ft_memmove(((void *)0), ((void *)0), 0));
	// printf("%p\n", ft_memmove(((void *)0), ((void *)0), 6));
	// printf("%p\n", ft_memmove(dst, src, 1));
	// printf("%p\n", ft_memmove(dst, ((void *)0), 6));
	// printf("%p\n", ft_memmove(((void *)0), dst, 6));
	printf ("%s\n", ft_memmove(dst, src, 20));
	printf ("%s\n", memmove(dst, src, 20));

}

// > Both NULL return NULL
// > Either NULL clash Segmentation fault
// memmove(s1, s2, n)
// ? s1 & s2 must be "array", not be "pointer".
// ? n is over strlen(s1) => return memmove(s1, s2, strlen(s1)).
// i think overlap area would be undefined and no one knows s1 & s2 is the same.