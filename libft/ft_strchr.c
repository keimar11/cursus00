/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:52:19 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 01:52:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (*s != 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%p\n", ft_strchr("keitkeit", '\0'));
// 	printf("%s\n", ft_strchr("keitkeit", '\0'));
// }

// [test 17] ASSERT_EQ_STR failed: "0x0" is not equal to expected "0x108e5bb64"func main at file srcs/test_ft_strchr.c, line 34
// [test 18] ASSERT_EQ_STR failed: "0x0" is not equal to expected "0x108e5bb54"func main at file srcs/test_ft_strchr.c, line 35
// [test 19] ASSERT_EQ_STR failed: "0x0" is not equal to expected "0x108e5bb55"func main at file srcs/test_ft_strchr.c, line 36
// [test 20] ASSERT_EQ_STR failed: "0x0" is not equal to expected "0x108e5bb54"func main at file srcs/test_ft_strchr.c, line 37
// [test 21] ASSERT_EQ_STR failed: "0x0" is not equal to expected "0x108e5bb55"func main at file srcs/test_ft_strchr.c, line 38
// [test 17] ASSERT_EQ_STR failed: "0x0" is not equal to expected "0x1078aab64"func main at file srcs/test_ft_strrchr.c, line 34
// [test 18] ASSERT_EQ_STR failed: "0x0" is not equal to expected "0x1078aab54"func main at file srcs/test_ft_strrchr.c, line 35
// [test 19] ASSERT_EQ_STR failed: "0x0" is not equal to expected "0x1078aab55"func main at file srcs/test_ft_strrchr.c, line 36
// [test 20] ASSERT_EQ_STR failed: "0x0" is not equal to expected "0x1078aab54"func main at file srcs/test_ft_strrchr.c, line 37
// [test 21] ASSERT_EQ_STR failed: "0x0" is not equal to expected "0x1078aab55"func main at file srcs/test_ft_strrchr.c, line 38

// /* 17 */ ASSERT_EQ_STR(ft_strchr(s, '\0'), strchr(s, '\0'));
// /* 18 */ ASSERT_EQ_STR(ft_strchr(s, 'l' + 256), strchr(s, 'l' + 256));
// /* 19 */ ASSERT_EQ_STR(ft_strchr(s, 'i' + 256), strchr(s, 'i' + 256));
// /* 20 */ ASSERT_EQ_STR(ft_strchr(s, 'l' - 256), strchr(s, 'l' - 256));
// /* 21 */ ASSERT_EQ_STR(ft_strchr(s, 'i' - 256), strchr(s, 'i' - 256));