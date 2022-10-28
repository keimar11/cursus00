/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:53:00 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 01:53:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}

// [test 52] ASSERT_EQ_I failed: ("173") is not equal to expected ("-83"). func main at file srcs/test_ft_strncmp.c, line 34
// [test 53] ASSERT_EQ_I failed: ("87") is not equal to expected ("-169"). func main at file srcs/test_ft_strncmp.c, line 36

// char *cmp2 = calloc(10, 1);
// strlcpy(cmp2, "libft", 10);
// cmp2[5] = CHAR_MIN;
// /* 52 */ ASSERT_EQ_I(ft_strncmp(str, cmp2, len), strncmp(str, cmp2, len));
// cmp2[5] = -42;
// /* 53 */ ASSERT_EQ_I(ft_strncmp(str, cmp2, len), strncmp(str, cmp2, len));