/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:12:02 by marvin            #+#    #+#             */
/*   Updated: 2022/11/11 21:57:22 by keitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_cnt(int n)
{
	int	cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		cnt++;
	while (n != 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static char	*str_min_fit(char *str)
{
	int		i;
	char	*min;

	i = 0;
	min = "-2147483648";
	while (*min != '\0')
		str[i++] = *min++;
	return (str);
}

static char	*str_fit(char *str, int n)
{
	int	i;

	i = str_cnt(n);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[i--] = '\0';
	while (n != 0)
	{
		str[i--] = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * str_cnt(n) + 1);
	if (!str)
		return (NULL);
	if (n == INT_MIN)
		str = str_min_fit(str);
	else
		str = str_fit(str, n);
	return (str);
}
