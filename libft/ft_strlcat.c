/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:49:02 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 00:49:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;
	size_t	i;

	dstsize = ft_strlen (dst);
	srcsize = ft_strlen (src);
	if (dstsize > size || size < 1)
		return (size);
	i = 0;
	while (*dst)
		dst += dstsize;
	while (i < size - ft_strlen (dst) - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dstsize + srcsize);
}

// int	main(void)
// {
// 	char *dst1 = calloc(100, sizeof(char));
// 	char *dst2 = calloc(100, sizeof(char));
// 	/* 1 */ ASSERT_EQ_I(ft_strlcat(dst1, "", 100), strlcat(dst2, "", 100));
// 	/* 2 */ ASSERT_EQ_STR(dst1, dst2);
// 	/* 3 */ ASSERT_EQ_I(ft_strlcat(dst1, "hello", 100), strlcat(dst2, "hello", 100));
// 	/* 4 */ ASSERT_EQ_STR(dst1, dst2);
// 	/* 5 */ ASSERT_EQ_I(ft_strlcat(dst1, "world", 100), strlcat(dst2, "world", 100));
// 	/* 6 */ ASSERT_EQ_STR(dst1, dst2);
// 	char *src1 = calloc(100, sizeof(char));
// 	char *src2 = calloc(100, sizeof(char));
// 	for (int i = 0; i < 99; i++)
// 	{
// 	src1[i] = i + 1;
// 	src2[i] = i + 1;
// 	}

// 	/* 7 */ ASSERT_EQ_I(ft_strlcat(dst1, src1, 0), strlcat(dst2, src2, 0));
// 	/* 8 */ ASSERT_EQ_STR(dst1, dst2);
// 	/* 9 */ ASSERT_EQ_I(ft_strlcat(dst1, src1, 10), strlcat(dst2, src2, 10));
// 	/* 10 */ ASSERT_EQ_STR(dst1, dst2);
// 	/* 11 */ ASSERT_EQ_I(ft_strlcat(dst1, src1, 50), strlcat(dst2, src2, 50));
// 	/* 12 */ ASSERT_EQ_STR(dst1, dst2);
// 	/* 13 */ ASSERT_EQ_I(ft_strlcat(dst1, src1, 100), strlcat(dst2, src2, 100));
// 	/* 14 */ ASSERT_EQ_STR(dst1, dst2);
// 	/* 15 */ ASSERT_EQ_I(ft_strlcat(dst1, src1, 10), strlcat(dst2, src2, 10));
// 	/* 16 */ ASSERT_EQ_STR(dst1, dst2);
// 	/* 17 */ ASSERT_EQ_I(ft_strlcat(dst1, src1, 100), strlcat(dst2, src2, 100));
// 	/* 18 */ ASSERT_EQ_STR(dst1, dst2);
// 	/* 19 */ ASSERT_EQ_I(ft_strlcat(NULL, src1, 0), strlcat(NULL, src2, 0));
// }

// [test 1] ASSERT_EQ_I failed: ("100") is not equal to expected ("0"). func main at file srcs/test_ft_strlcat.c, line 19
// [test 3] ASSERT_EQ_I failed: ("105") is not equal to expected ("5"). func main at file srcs/test_ft_strlcat.c, line 21
// [test 5] ASSERT_EQ_I failed: ("105") is not equal to expected ("10"). func main at file srcs/test_ft_strlcat.c, line 23
// [test 10] ASSERT_EQ_STR failed: ("helloworld") is not equal to expected ("helloworld"). func main at file srcs/test_ft_strlcat.c, line 35
// [test 11] ASSERT_EQ_I failed: ("149") is not equal to expected ("109"). func main at file srcs/test_ft_strlcat.c, line 36
// [test 12] ASSERT_EQ_STR failed: ("helloworld") is not equal to expected ("helloworld"). func main at file srcs/test_ft_strlcat.c, line 37
// [test 13] ASSERT_EQ_I failed: ("199") is not equal to expected ("148"). func main at file srcs/test_ft_strlcat.c, line 38
// [test 14] ASSERT_EQ_STR failed: ("helloworld") is not equal to expected ("helloworld"). func main at file srcs/test_ft_strlcat.c, line 39