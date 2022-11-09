/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:27:30 by marvin            #+#    #+#             */
/*   Updated: 2022/11/04 17:32:01 by keitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	bgn;
	size_t	end;

	bgn = 0;
	end = ft_strlen(s1);
	while (s1[bgn] && ft_strchr(set, s1[bgn]))
		bgn++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	if (end == 0)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (end - bgn + 1));
	if (!str)
		return (NULL);
	ft_strlcpy (str, &s1[bgn], end - bgn + 1);
	return (str);
}
