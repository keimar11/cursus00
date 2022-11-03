/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:55:07 by marvin            #+#    #+#             */
/*   Updated: 2022/11/03 14:55:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	int	i = 128;
	while (i--)
	{
		printf("Ascii %d\n", i);
		printf("%d\n", ft_isalpha(i));
		printf("%d\n", ft_isdigit(i));
		printf("%d\n", ft_isalnum(i));
		printf("%d\n", ft_isprint(i));
		printf("%d\n", ft_isascii(i));
	}
}
