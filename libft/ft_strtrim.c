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

char	*trim_put(char *dst, char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (i < ft_strlen(s1))
	{
		j = 0;
		while (s1[i] == set[j])
		{
			i++;
			j++;
		}
		printf("%d %d\n", i, j);
		if (set[j - 1] != 0)
		{
			i += -j;
			printf("%d\n", i);
		}
		dst[k++] = s1[i++];
		printf("%s\n", dst);
	}
	dst[k] = '\0';
	return (dst);
}

size_t	trim_cnt(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	m;

	i = 0;
	m = 0;
	while (s1[i])
	{
		j = 0;
		if (s1[i] == set[j])
		{
			while (s1[i++] == set[j])
				j++;
			i -= 1;
			if (set[j] == 0)
				m += -1 * ft_strlen(set);
		}
		i++;
	}
	return (i + m);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;

	dst = malloc(sizeof(char) * (trim_cnt(s1, set) + 1));
	if (!dst)
		return (NULL);
	dst = trim_put(dst, s1, set);
	return (dst);
}

int main()
{
	char s1[] = "worlt world";
	char set[] = "world";
	printf("%s", ft_strtrim(s1, set));
	return 0;
}

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
