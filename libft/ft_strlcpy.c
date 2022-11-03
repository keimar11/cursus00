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
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	printf("%s\n%s\n", dst, src);
	if (size == 0)
		return (ft_strlen ((char *)src));
	i = 0;
	while (i++ < (size - 1))
		*dst = *src;
	*dst = '\0';
	printf("%s\n%s\n", dst, src);
	return (ft_strlen ((char *)src));
}
