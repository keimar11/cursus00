/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:29:37 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 01:29:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*overflow(long int n, const char c)
{
	long int	jdg1;
	long int	jdg2;

	jdg1 = LONG_MAX / 10;
	jdg2 = LONG_MAX % 10;
	if (n > jdg1)
		return (NULL);
	if (n == jdg1 && c - 48 > jdg2)
		return (NULL);
	return ("safe");
}

char	*underflow(long int n, const char c)
{
	long int	jdg1;
	long int	jdg2;

	jdg1 = LONG_MIN / 10;
	jdg2 = LONG_MIN % 10;
	if (n < jdg1)
		return (NULL);
	if (n == jdg1 / 10 && (c - 48) * (-1) < jdg2)
		return (NULL);
	return ("safe");
}

int	ft_atoi(const char *str)
{
	int			m;
	long int	nb;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	m = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			m *= -1;
		str++;
	}
	nb = 0;
	while (*str >= 48 && *str <= 57)
	{
		if (m > 0 && overflow(nb, *str) == NULL)
			return ((int)LONG_MAX);
		if (m < 0 && underflow(-1 * nb, *(str + 1)) == NULL)
			return ((int)LONG_MIN);
		nb = nb * 10 + (*str++ - '0');
	}
	return (m * nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf ("Mine: %d\n", ft_atoi (" \n \f \t \r    -9223"));
// 	printf ("Orig: %d\n", atoi ("        -9223"));
// 	printf ("Mine: %d\n", ft_atoi ("9223372036854775808"));
// 	printf ("Orig: %d\n", atoi ("9223372036854775808"));
// 	printf ("Mine: %d\n", ft_atoi ("-9223372036854775809"));
// 	printf ("Orig: %d\n", atoi ("-9223372036854775809"));
// 	printf ("Mine: %d\n", ft_atoi ("-9223372036854775808"));
// 	printf ("Orig: %d\n", atoi ("-9223372036854775808"));
// 	printf ("Mine: %d\n", ft_atoi ("-922337"));
// 	printf ("Orig: %d\n", atoi ("-922337"));

// 	printf("MIN/10: %ld\n", LONG_MIN/10);
// 	printf("MIN%%10: %ld\n", LONG_MIN%10);
// }
