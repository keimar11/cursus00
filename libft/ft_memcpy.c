/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:00:21 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 02:00:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char	*str;
	char	*src;
	int		l1;
	int		l2;

	str = (char *)s1;
	src = (char *)s2;
	l1 = ft_strlen(str);
	l2 = ft_strlen(src);

	while (l1 >= l2 && n-- > 0)
		*str++ = *src++;
	return (s1);
}

// int main ()
// {
// 	const char src[50] = "http://www.tutorialspoint.com";
// 	char dest[50];
// 	strcpy(dest,"Heloooo!!");
// 	printf("Before memcpy dest = %s\n", dest);
// 	ft_memcpy(dest, src, strlen(src)+1);
// 	printf("After memcpy dest = %s\n", dest);
// 	return(0);
// }
