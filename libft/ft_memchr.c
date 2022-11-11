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
	unsigned char	*mem;
	unsigned char	i;

	mem = s;
	i = c;
	while (n--)
	{
		if (*mem == i)
			return ((void *)mem);
		s++;
	}
	return (NULL);
}
