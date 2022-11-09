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
	size_t	bl;
	size_t	ll;

	if (*little == '\0' && len == 0)
		return ((char *)big);
	bl = ft_strlen(big);
	ll = ft_strlen(little);
	k = 0;
	while (k < bl && k < len)
	{
		i = 0;
		j = k;
		while (big[i] == little[i] && j++ < len)
			i++;
		if (i == ll)
			return ((char *)big);
		big++;
		k++;
	}
	return (0);
}
