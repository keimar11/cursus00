/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:41:43 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 00:11:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char	*sub;
	int		i;

	sub = (char *)malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i - 1];
		i++;
	}
	sub [i] = 0;
	return (sub);
}

// #include <stdio.h>
// int main()
// {
// 	char s[] = "HelloWorld";
// 	int start = 2;
// 	int len = 5;
// 	printf("%s", ft_substr(s, start, len));
// 	return 0;
// }
