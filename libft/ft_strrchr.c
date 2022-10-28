/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:53:12 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 01:53:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;

	if (c == 0)
		return ((char *)s + ft_strlen(s));
	save = 0;
	while (*s != 0)
	{
		if (*s == (unsigned char)c)
			save = (char *) s;
		s++;
	}
	return (save);
}
