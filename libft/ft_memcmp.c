/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:00:14 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 02:00:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mem1;
	unsigned char	*mem2;

	mem1 = s1;
	mem2 = s2;
	while (n-- > 0)
	{
		if (*mem1 != *mem2)
			return (*mem1 - *mem2);
		mem1++;
		mem2++;
	}
	return (0);
}
