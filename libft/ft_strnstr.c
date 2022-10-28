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

int	main(void)
{
	char *str = "libft-test-tokyo";
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
	// ASSERT_EQ_PTR(ft_strnstr(str, "", i), strnstr(str, "", i));
	// ASSERT_EQ_PTR(ft_strnstr(str, "libft-test-tokyo", i), strnstr(str, "libft-test-tokyo", i));
	// ASSERT_EQ_PTR(ft_strnstr(str, "libft", i), strnstr(str, "libft", i));
	// ASSERT_EQ_PTR(ft_strnstr(str, "test", i), strnstr(str, "test", i));
	printf("%d: %s\n", i, ft_strnstr(str, "test", i));
	printf("%d: %s\n", i, strnstr(str, "test", i));
	// ASSERT_EQ_PTR(ft_strnstr(str, "libft~", i), strnstr(str, "libft~", i));
	// ASSERT_EQ_PTR(ft_strnstr(str, "z", i), strnstr(str, "z", i));
	}
	// /* 113 */ ASSERT_EQ_PTR(ft_strnstr("", "hello", 5), strnstr("", "hello", 5));
	// /* 114 */ ASSERT_EQ_PTR(ft_strnstr("", "", 0), strnstr("", "", 0));
	// /* 115 */ ASSERT_EQ_PTR(ft_strnstr(NULL, "1", 0), strnstr(NULL, "1", 0));
	// Segmentation Fault
	// /* 116 */ ASSERT_EQ_PTR(ft_strnstr(NULL, "fake", 3), strnstr(NULL, "fake", 3));
	// /* 116 */ ASSERT_EQ_PTR(ft_strnstr(NULL, "1", 1), ft_strnstr(NULL, "1", 1));
}