/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_me.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:08:01 by marvin            #+#    #+#             */
/*   Updated: 2022/11/21 16:01:06 by keitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	allfree(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free (arr);
}

static char	*char_put(char const *s, size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	**do_split(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	save;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		save = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		arr[j] = char_put(&s[save], i - save);
		if (arr[j++] == NULL)
		{
			allfree(arr);
			return (NULL);
		}
	}
	return (arr);
}

static size_t	arr_cnt(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = (char **)ft_calloc((arr_cnt(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	arr = do_split(arr, s, c);
	return (arr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	**arr;
// 	int		i;

// 	arr = ft_split(",,,hello,,,world,,,42,,,tokyo,,,,,,", ',');
// 	i = 0;
// 	while (arr[i] != 0)
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// 	free(arr);
// }
