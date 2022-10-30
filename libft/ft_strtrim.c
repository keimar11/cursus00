/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:05:58 by marvin            #+#    #+#             */
/*   Updated: 2022/10/30 23:18:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// int main()
// {
// 	char s1[] = "hello world";
// 	char set[] = "hell";
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