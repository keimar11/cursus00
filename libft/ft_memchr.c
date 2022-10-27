/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:59:59 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 01:59:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	i;

	i = c;
	while (n-- > 0)
	{
		if (*(unsigned char *)s == i)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

// int main () {
// 	const char str[] = "http://ez.tutorialspoint.com";
// 	const char ch = '/';
// 	char *ret;

// 	ret = ft_memchr(str, 108 - 256, strlen(str));
// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	ret = memchr(str, 108 - 256, strlen(str));
// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	return(0);
// }
