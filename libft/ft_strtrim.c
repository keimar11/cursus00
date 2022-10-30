/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:05:58 by marvin            #+#    #+#             */
/*   Updated: 2022/10/30 15:23:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*trim_idx(char *str, char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	size_t	setsize;

	k = 0;
	setsize = ft_strlen(set);
	while (*s1)
	{
		i = 0;
		while (s1[i] == set[i])
			i++;
		if (i == setsize)
		{
			s1 += setsize;
			continue ;
		}
		str[k++] = *s1++;
	}
	str[k] = 0;
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
// 	char s1[] = "hello world";
// 	char set[] = "hello";
// 	printf("%s", ft_strtrim(s1, set));
// 	return 0;
// }