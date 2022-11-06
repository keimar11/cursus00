/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_me.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:08:01 by marvin            #+#    #+#             */
/*   Updated: 2022/11/01 17:35:54 by keitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(char const *src, int n)
{
	char	*str;
	int		i;

	if (n == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (n-- > 0)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

static int	arr_cnt(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || \
		(s[i] == c && (s[i + 1] != c || s[i + 1] != 0)))
			cnt++;
		i++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		save;

	str = (char **)ft_calloc((arr_cnt(s, c) + 1), sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		save = i;
		while (s[i] != c && s[i] != 0)
			i++;
		str[j++] = ft_strndup (&s[save], i - save);
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	**arr;
// 	int		i;

// 	arr = ft_split("1-2-3-4-5-6-7-8--8-8--8-4------4--4", '-');
// 	i = 0;
// 	while (arr[i] != 0)
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// 	free(arr);
// }
