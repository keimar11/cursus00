/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:53:06 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 01:53:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len_l;

	if (*little == 0)
		return ((char *)big);
	len_l = ft_strlen(little);
	k = 0;
	while (big != 0 && k < len)
	{
		i = 0;
		j = k;
		while (big[i] == little[i] && j++ < len)
			i++;
		if (i == len_l)
			return ((char *)big);
		big++;
		k++;
	}
	return (0);
}
