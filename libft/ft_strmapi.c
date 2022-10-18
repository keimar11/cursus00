/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:36:51 by marvin            #+#    #+#             */
/*   Updated: 2022/10/18 23:52:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*array;
	size_t	i;

	if (!s || !f)
		return (0);
	i = 0;
	array = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (array == NULL)
		return (NULL);
	while (i < ft_strlen((char *)s))
	{
		array[i] = (*f)(i, s[i]);
		i++;
	}
	array[i] = 0;
	return (array);
}

// 

// char f(unsigned int i, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		c = c - 32;
// 	return (c);
// }

// int main()
// {
// 	char str1[] = "I am Iron man.";
// 	char* str2;
// 	str2 = ft_strmapi(str1, *f);
// 	printf("%s\n", str2);
// }