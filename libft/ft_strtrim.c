/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:27:30 by marvin            #+#    #+#             */
/*   Updated: 2022/11/02 01:27:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	bgn;
	size_t	end;

	bgn = 0;
	while (s1[bgn] && ft_strchr(set, s1[bgn]))
		bgn++;
	end = ft_strlen(s1);
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	str = malloc(sizeof(char) * (end - bgn + 1));
	ft_strlcpy (str, &s1[bgn], end - bgn + 1);
	return (str);
}

// int main()
// {
// 	char s1[] = ",,,, ,,worlt world,,,,,,,,, ,,";
// 	char set[] = ",";
// 	printf("%s", ft_strtrim(s1, set));
// 	return 0;
// }

// intmain(void)
// {
// /* 1 */ ASSERT_EQ_STR(ft_strtrim("hello world", "world"), "hello ");
// /* 2 */ ASSERT_EQ_STR(ft_strtrim("hello world", "hello"), " world");
// /* 3 */ ASSERT_EQ_STR(ft_strtrim("hello world", ""), "hello world");
// /* 4 */ ASSERT_EQ_STR(ft_strtrim("", ""), "");
// /* 5 */ ASSERT_EQ_STR(ft_strtrim("    hello world     ", " "), "hello w
// orld");
// /* 6 */ ASSERT_EQ_STR(ft_strtrim(" \n\t\r    hello \n\t\r world     \r\
// t\n\t \r\n", " \n\t\r"), "hello \n\t\r world");
// /* 7 */ ASSERT_EQ_STR(ft_strtrim("hello world", "abcdefghijklmnopqrstuv
// wxyz"), " ");
// }
