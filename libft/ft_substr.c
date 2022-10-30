/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:41:43 by marvin            #+#    #+#             */
/*   Updated: 2022/10/30 23:43:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if ((size_t)start > ft_strlen(s))
		return (s + (int)ft_strlen(s));
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
// 	int start = 20;
// 	int len = 100;
// 	printf("%s", ft_substr(s, start, len));
// 	return 0;
// }

// [test 5] ASSERT_EQ_STR failed: ("cs/test_ft_substr.c") is not equal to expected (""). func main at file srcs/test_ft_substr.c, line 22
// [test 10] ASSERT_EQ_STR failed: ("cs/te") is not equal to expected (""). func main at file srcs/test_ft_substr.c, line 27