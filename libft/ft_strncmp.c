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

// int	main(void)
// {
// 	char	*cmp2;

// 	cmp2 = calloc(sizeof(char), 10);
// 	ft_strlcpy(cmp2, "libft", 10);
// 	cmp2[5] = CHAR_MIN;
// 	printf("%d\n", ft_strncmp("libft", cmp2, 10));
// 	cmp2[5] = -41;
// 	printf("%d\n", ft_strncmp("libft", cmp2, 10));
// }
// char1 = 128
// char2 = 41
// unsigned char = -128
// unsigned char = -215

// (unsigned char *) -> (char *)になるとs2に-文字が入った時対応できなくなる
// 	cmp2[5] = CHAR_MIN;
// 52/	ASSERT_EQ_I(ft_strncmp(str, cmp2, len), strncmp(str, cmp2, len));
// 	cmp2[5] = -42;
// 53/	ASSERT_EQ_I(ft_strncmp(str, cmp2, len), strncmp(str, cmp2, len));
// [test 52] ASSERT_EQ_I failed: ("173") is not equal to expected ("-83"). func main at file srcs/test_ft_strncmp.c, line 34
// [test 53] ASSERT_EQ_I failed: ("87") is not equal to expected ("-169"). func main at file srcs/test_ft_strncmp.c, line 36