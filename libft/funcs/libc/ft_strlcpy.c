/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:52:46 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 01:52:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen ((char *)src));
	i = 0;
	while (i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen ((char *)src));
}

// int	main(void)
// {
//  char c[256] = "42tokyo";
//  printf ("%ld\n", ft_strlcpy(NULL  , "aiueo", 0));  // 5
//  printf ("%ld\n", ft_strlcpy(NULL  , "aiueo", 2));  // sgf
//  printf ("%ld\n", ft_strlcpy(c     , NULL   , 0));  // sgf
//  printf ("%ld\n", ft_strlcpy(c     , NULL   , 0));  // sgf
//  printf ("%ld\n", ft_strlcpy(NULL  , NULL   , 0));  // sgf
//  printf ("%ld\n", ft_strlcpy(NULL  , NULL   , 2));  // sgf
// }
