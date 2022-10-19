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

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n-- > 0)
	{
		*str = 0;
		*str;
	}
	return ;
}

// int main(void)
// {
// 	void	*s;

// 	s = "keity";
// 	ft_bzero(s, 3);
// }
