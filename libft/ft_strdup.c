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

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*scr;
	int		strl;
	int		i;

	strl = ft_strlen (str);
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

// int	main(void)
// {
// 	printf("%p", ft_strdup(""));
// }