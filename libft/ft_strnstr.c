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

char	*ft_strnstr(const char *big, const char *little, int len)
{
	int		i;
	int		j;
	int		len_l;
	char	*save;

	len_l = ft_strlen ((char *)little);
	save = (char *)big;
	i = 0;
	while (save != 0 && i < len)
	{
		j = 0;
		while (save[i] == little[j])
		{
			i++;
			j++;
		}
		if (j == len_l)
			return ((char *)save);
		save++;
	}
	return (0);
}

// int	main()
// {
// 	const char *largestring = "Foo Bar Baz";
// 	const char *smallstring = "oo";
// 	char *ptr;

// 	ptr = ft_strnstr(largestring, smallstring, 3);
// 	printf("ft : %s\n", ptr);
// 	ptr = strnstr(largestring, smallstring, 3);
// 	printf("or : %s\n", ptr);
// }
