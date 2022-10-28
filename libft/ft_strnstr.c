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
	size_t	k;
	size_t	len_l;

	if (*little == 0)
		return ((char *)big);
	len_l = ft_strlen(little);
	k = 0;
	while (big != 0 && k < len)
	{
		i = 0;
		while (big[i] == little[i])
			i++;
		if (i == len_l)
			return ((char *)big);
		big++;
		k++;
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

// test 1] ASSERT_EQ_PTR failed: ("0x0") is not equal to expected ("0x109989b32"). func main at file srcs/test_ft_strnstr.c, line 21