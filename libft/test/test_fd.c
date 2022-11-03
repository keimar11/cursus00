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
	int	i = -1;

	while (i < 4)
	{
		printf ("\n%d\n", i);
		printf ("putchar\n");
		ft_putchar_fd('c', i);
		ft_putchar_fd('9', i);
		ft_putchar_fd('\t', i);
		printf ("\nputstr\n");
		ft_putstr_fd("Hie", i);
		ft_putstr_fd(" I am", i);
		ft_putstr_fd(" -Cui.t-", i);
		printf ("\nputendl\n");
		ft_putendl_fd("Hie", i);
		ft_putendl_fd("I am", i);
		ft_putendl_fd("-Cui.t-", i);
		printf ("\nputnbr\n");
		ft_putnbr_fd(99, i);
		printf("\n");
		ft_putnbr_fd(-11, i);
		printf("\n");
		ft_putnbr_fd(2147483647, i);
		printf("\n");
		ft_putnbr_fd(-2147483648, i);
		printf("\n");
		ft_putnbr_fd(2147483649, i);
		printf("\n");
		i++;
	}
}
