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
#include <stdio.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	bgn;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	bgn = 0;
	end = ft_strlen(s1);
	while (s1[bgn] && ft_strchr(set, s1[bgn]))
		bgn++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	if (end == 0)
		str = ft_substr(s1, bgn, end);
	else
		str = ft_substr(s1, bgn, end - bgn);
	return (str);
}
