/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:24:02 by marvin            #+#    #+#             */
/*   Updated: 2022/11/13 11:54:36 by keitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	dgt_cnt(size_t n)
{
	size_t	cnt;

	cnt = 0;
	while (n != 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static void	putnbr_exc_fd(int n, int fd)
{
	if (n == INT_MIN)
		ft_putstr_fd("-2147483648", fd);
	else
		ft_putchar_fd('0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	arr[11];
	size_t		idx;

	if (n == INT_MIN || n == 0)
	{
		putnbr_exc_fd(n, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	idx = dgt_cnt(n);
	arr[idx] = '\0';
	while (idx)
	{
		arr[idx-- -1] = '0' + (n % 10);
		n /= 10;
	}
	ft_putstr_fd(arr, fd);
}

// int main(void)
// {
// 	ft_putnbr_fd(INT_MIN, 1);
// }
