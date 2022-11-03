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

	if (!(s1) && !(s2))
		return (NULL);
	str = (char *)s1;
	src = (char *)s2;
	while (n-- > 0)
		*str++ = *src++;
	return (s1);
}
