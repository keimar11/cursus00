/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:41:43 by marvin            #+#    #+#             */
/*   Updated: 2022/10/30 23:26:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = (char *)malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub [i] = 0;
	return (sub);
}

// int main()
// {
// 	char s[] = "HelloWorld";
// 	int start = 2;
// 	int len = 5;
// 	printf("%s", ft_substr(s, start, len));
// 	return 0;
// }

// cat error.log | grep substr
// [test 1] ASSERT_EQ_STR failed: ("?libft-test-tokyo") is not equal to expected ("libft-test-tokyo"). func main at file srcs/test_ft_substr.c, line 18
// [test 2] ASSERT_EQ_STR failed: ("t-test-tokyo") is not equal to expected ("-test-tokyo"). func main at file srcs/test_ft_substr.c, line 19
// [test 3] ASSERT_EQ_STR failed: ("t-tokyo") is not equal to expected ("-tokyo"). func main at file srcs/test_ft_substr.c, line 20
// [test 4] ASSERT_EQ_STR failed: ("yo") is not equal to expected ("o"). func main at file srcs/test_ft_substr.c, line 21
// [test 5] ASSERT_EQ_STR failed: ("cs/test_ft_substr.c") is not equal to expected (""). func main at file srcs/test_ft_substr.c, line 22
// [test 6] ASSERT_EQ_STR failed: ("?libf") is not equal to expected ("libft"). func main at file srcs/test_ft_substr.c, line 23
// [test 7] ASSERT_EQ_STR failed: ("t-tes") is not equal to expected ("-test"). func main at file srcs/test_ft_substr.c, line 24
// [test 8] ASSERT_EQ_STR failed: ("t-tok") is not equal to expected ("-toky"). func main at file srcs/test_ft_substr.c, line 25
// [test 9] ASSERT_EQ_STR failed: ("yo") is not equal to expected ("o"). func main at file srcs/test_ft_substr.c, line 26
// [test 10] ASSERT_EQ_STR failed: ("cs/te") is not equal to expected (""). func main at file srcs/test_ft_substr.c, line 27