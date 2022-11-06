/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:41:43 by marvin            #+#    #+#             */
/*   Updated: 2022/11/06 16:17:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		return (NULL);
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

// #include <stdio.h>
// int	main()
// {
// 	char *dst = ft_substr("\0", 0, 0);
// 	printf("%s\n", dst);
// 	free(dst);
// 	printf("%zu\n", ft_strlen("\0"));
// }

/*
DEAL WITH '\0'
	len = strlen(substr);
	substr("\0", 0, 1) -> Return (NULL);
	if not, would Return ("\0\0") : Wrong;
	substr("\0", 0, 0) -> Return ("\0") : Correct;
DEAL WITH OVERLAP
	start + len > strlen(s) -> ovelap
*/
