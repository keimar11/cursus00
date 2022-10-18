/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:51:17 by marvin            #+#    #+#             */
/*   Updated: 2022/10/18 23:47:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t1;
	char	*t2;
	char	*new;
	int		i;
	int		j;

	t1 = (char *)s1;
	t2 = (char *)s2;
	new = (char *)malloc(sizeof(char) * (ft_strlen (t1) + ft_strlen (t2) + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (t1[j])
		new[i++] = (char)t1[j++];
	j = 0;
	while (t2[j])
		new[i++] = (char)t2[j++];
	new[i] = 0;
	return (new);
}

// int	main(void)
// {
// 	printf ("%s\n", ft_strjoin("Hola", ""));
// }
