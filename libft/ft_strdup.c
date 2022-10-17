/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:52:26 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 01:52:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*scr;
	int		strl;
	int		i;

	strl = ft_strlen (str);
	if (strl == 0)
		return (0);
	scr = (char *)malloc (sizeof(char) * (strl + 1));
	if (scr == 0)
		return (0);
	i = 0;
	while (str[i])
	{
		scr[i] = str[i];
		i++;
	}
	scr[i] = 0;
	return (scr);
}
