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

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char *)s == c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

// int main () {
// 	const char str[] = "http://www.tutorialspoint.com";
// 	const char ch = '/';
// 	char *ret;

// 	ret = ft_memchr(str, ch, strlen(str));
// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	return(0);
// }
