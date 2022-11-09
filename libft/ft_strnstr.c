/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:53:06 by marvin            #+#    #+#             */
/*   Updated: 2022/11/09 20:49:51 by keitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	ll;

	if (!big && len == 0)
		return (NULL);
	if (*little == '\0' && (*big == '\0' || len == 0))
		return ((char *)big);
	ll = ft_strlen(little);
	k = 0;
	while (*big && k < len)
	{
		i = 0;
		j = k;
		while (big[i] == little[i] && big[i] != '\0' && j++ < len)
			i++;
		if (i == ll)
			return ((char *)big);
		big++;
		k++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
void	ASSERT_EQ_PTR(char *mine, char *orig);

int main()
{
	char *str = "libft-test-tokyo";
	int	i = 0;
	ASSERT_EQ_PTR(ft_strnstr(str, "", i), strnstr(str, "", i));
	ASSERT_EQ_PTR(ft_strnstr(str, "libft-test-tokyo", i), strnstr(str, "libft-test-tokyo", i));
	ASSERT_EQ_PTR(ft_strnstr(str, "libft", i), strnstr(str, "libft", i));
	ASSERT_EQ_PTR(ft_strnstr(str, "test", i), strnstr(str, "test", i));
	ASSERT_EQ_PTR(ft_strnstr(str, "tokyo", i), strnstr(str, "tokyo", i));
	ASSERT_EQ_PTR(ft_strnstr(str, "libft~", i), strnstr(str, "libft~", i));
	ASSERT_EQ_PTR(ft_strnstr(str, "z", i), strnstr(str, "z", i));
	return 0;
}

void	ASSERT_EQ_PTR(char *mine, char *orig)
{
	if (mine == orig)
		printf("\nCLEAR\n");
	else
	{
		printf("\nOUT\n");
	}
	printf("%s\n", mine);
	printf("%s\n", orig);
}
*/
