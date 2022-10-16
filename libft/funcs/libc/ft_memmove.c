/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:01:16 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 02:01:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*str;
	char	*src;

	str = (char *)s1;
	src = (char *)s2;
	while (n-- > 0)
		*str++ = *src++;
	return (s1);
}

// int main () {
// 	char dest[] = "oldstring";
// 	const char src[]  = "newstring";

// 	printf("Before memmove dest = %s, src = %s\n", dest, src);
// 	ft_memmove(dest, src, 9);
// 	printf("After memmove dest = %s, src = %s\n", dest, src);

// 	return(0);
// }
