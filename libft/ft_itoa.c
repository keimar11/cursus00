/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:26:14 by marvin            #+#    #+#             */
/*   Updated: 2022/10/23 18:21:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*str_rev(char *str)
{
	char	*scr;
	int		cnt;
	int		i;

	cnt = ft_strlen (str);
	scr = (char *)malloc(sizeof(char) * (cnt + 1));
	i = 0;
	while (cnt-- > 0)
	{
		scr[i] = str[cnt];
		i++;
	}
	scr[i] = 0;
	return (scr);
}

char	*str_fit(char *str, int n)
{
	int	i;
	int	flag;

	if (n == -2147483648)
		str = "-2147483648";
		return (str);
	i = 0;
	flag = 0;
	if (n == 0)
		str[i++] = '0';
	else if (n < 0)
	{
		n *= -1;
		flag = 1;
	}
	while (n != 0)
	{
		str[i++] = '0' + (n % 10);
		n /= 10;
	}
	if (flag == 1)
		str[i++] = '-';
	str[i] = 0;
	return (str);
}

int	str_cnt(int n)
{
	int	cnt;

	if (n == 0)
		return (1);
	cnt = 0;
	if (n < 0)
		cnt++;
	while (n != 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * str_cnt(n) + 1);
	if (str == NULL)
		return (NULL);
	str = str_fit(str, n);
	str = str_rev(str);
	return (str);
}

// int main()
// {
// 	printf("%s\n", ft_itoa(-110));
// 	return (0);
// }