/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:05:58 by marvin            #+#    #+#             */
/*   Updated: 2022/11/01 18:03:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*trim_put(char *dst, char const *s1, char const *set)
{
	ft
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
	char s1[] = "hello world";
	char set[] = "hell";
	printf("%s", ft_strtrim(s1, set));
	return 0;
}