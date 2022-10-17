/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:40:09 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 01:40:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, int n)
{
	while (n-- > 0)
	{
		s = 0;
		s++;
	}
}

// int main(void)
// {
// 	void	*s;

// 	s = "keity";
// 	ft_bzero(s, 3);
// }