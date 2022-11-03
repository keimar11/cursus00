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

#include "libft.h"

// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	size_t	i;

// 	if (size == 0)
// 		return (ft_strlen ((char *)src));
// 	i = 0;
// 	while (i < (size - 1))
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = 0;
// 	return (ft_strlen ((char *)src));
// }

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_l;

	src_l = ft_strlen((char *)src);
	if (size == 0)
		return (src_l);
	while (i++ < (size - 1))
		*dst++ = *src++;
	*dst = '\0';
	return (src_l);
}