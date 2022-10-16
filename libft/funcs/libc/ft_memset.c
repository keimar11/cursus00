/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:02:05 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 02:02:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// void	*ft_memset(void *s, int c, int n)
// {
// 	while (n-- > 0)
// 	{
// 		*(char *)s++ = c;
// 	}
// 	return (s);
// }

void	*ft_memset(void *s, int c, int n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}

// int main(void)
// {
//  char str[] = "train";
//  printf("%s\n", str);
//  ft_memset(str, 'z', 3);
//  printf("%s", str);
//  return 0;
// }
