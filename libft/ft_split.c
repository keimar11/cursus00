/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_me.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:08:01 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 00:08:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strndup(char const *src, int n)
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

int	arr_cnt(char const *s, char c)
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

	str = (char **)malloc(sizeof(char *) * (arr_cnt(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		while (s[i] == c)
			i++;
		save = i;
		while (s[i] != c && s[i] != 0)
			i++;
		str[j] = ft_strndup (&s[save], i - save);
		if (str[j++] == 0)
			return (NULL);
	}
	return (str);
}

// int	main(void)
// {
// 	char	**arr;
// 	int		i;

// 	arr = ft_split("I am a Iron Man", ' ');
// 	i = 0;
// 	while (arr[i] != 0)
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// 	free(arr);
// }