/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:05:58 by marvin            #+#    #+#             */
/*   Updated: 2022/10/15 23:07:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*trim_idx(char *str, char const *s1, char const *set)
{
	int	i;
	int	j;
	int	idx;

	i = 0;
	j = 0;
	idx = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == 0)
		{
			str[idx++] = s1[i];
		}
		j = 0;
		i++;
	}
	str[idx] = 0;
	return (str);
}

int	trim_cnt(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	j = 0;
	cnt = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == 0)
			cnt++;
		j = 0;
		i++;
	}
	printf ("%d\n", cnt);
	return (cnt);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ns;

	ns = (char *)malloc(sizeof(char) * trim_cnt(s1, set) + 1);
	if (ns == NULL)
		return (NULL);
	ns = trim_idx(ns, s1, set);
	return (ns);
}

// int main()
// {
// 	char s1[] = "abcabc wowow bbccaa";
// 	char set[] = " bb";
// 	printf("%s", ft_strtrim(s1, set));
// 	return 0;
// }