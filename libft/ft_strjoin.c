/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:51:17 by marvin            #+#    #+#             */
/*   Updated: 2022/11/02 22:33:28 by keitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen (s1) + ft_strlen (s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[j])
		str[i++] = (char)s1[j++];
	j = 0;
	while (s2[j])
		str[i++] = (char)s2[j++];
	str[i] = 0;
	return (str);
}
