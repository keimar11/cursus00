/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:14:42 by marvin            #+#    #+#             */
/*   Updated: 2022/10/18 23:42:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	number(int a, char *arr, int i, int fd)
{
	int	b;

	if (a < 0)
	{
		write(fd, "-", 1);
		a = -a;
	}
	while (1)
	{
		b = a % 10;
		a = a / 10;
		arr[i] = b + '0';
		i++;
		if (a == 0)
		{
			break ;
		}
	}
	i--;
	while (i >= 0)
	{
		write (fd, &arr[i], 1);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		a;
	int		i;
	char	arr[100];

	a = n;
	i = 0;
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	number (a, arr, i, fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd (11, 1);
// }
