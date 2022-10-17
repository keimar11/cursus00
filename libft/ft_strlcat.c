/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:49:02 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 00:49:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	rv;
	size_t	i;
	size_t	j;

	rv = ft_strlen (dst) + ft_strlen ((char *)src);
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while ((j < dstsize - ft_strlen (dst) - 1) && src[j])
		dst[i++] = src[j++];
	dst[i] = 0;
	return (rv);
}

// int	main(void)
// {
// 	char a[100] = "Hie! ";
// 	char b[] = "I'm Keity.";

// 	printf("%ld\n", ft_strlcat (a, b, 100));
// }

// int	main(void)
// {
//  char c[256] = "42tokyo";
//  printf ("%ld\n", ft_strlcat(NULL  , "aiueo", 0));  // 5
//  printf ("%ld\n", ft_strlcat(NULL  , "aiueo", 2));  // sgf
//  printf ("%ld\n", ft_strlcat(c     , NULL   , 0));  // sgf
//  printf ("%ld\n", ft_strlcat(c     , NULL   , 0));  // sgf
//  printf ("%ld\n", ft_strlcat(NULL  , NULL   , 0));  // sgf
//  printf ("%ld\n", ft_strlcat(NULL  , NULL   , 2));  // sgf
// }
