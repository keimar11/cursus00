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

int	ft_atoi(const char *str)
{
	size_t	m;
	size_t	nb;

	if (str == NULL)
		return (0);
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
	while (*str >= '0' && *str <= '9')
		nb = nb * 10 + (*str++ - '0');
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
// 	printf ("Mine: %d\n", ft_atoi ("-922337"));
// 	printf ("Orig: %d\n", atoi ("-922337"));
// 	printf("LLONG_MAX: %ld\n", LLONG_MAX);
// 	printf("LLONG_MIN: %ld\n", LLONG_MIN);
// 	printf("MAX/10: %ld\n", LLONG_MAX/10);
// 	printf("MAX%%10: %ld\n", LLONG_MAX%10);
// 	printf("MIN/10: %ld\n", LLONG_MIN/10);
// 	printf("MIN%%10: %ld\n", LLONG_MIN%10);
// 	printf("-11/10 = %d\n", -11/10);
// 	printf("-11%%10 = %d\n", -11%10);
// }

// [test 27] ASSERT_EQ_I failed: ("-1") is not equal to expected ("0"). func main at file srcs/test_ft_atoi.c, line 44
// [test 28] ASSERT_EQ_I failed: ("0") is not equal to expected ("-1"). func main at file srcs/test_ft_atoi.c, line 45
// [test 29] ASSERT_EQ_I failed: ("-1") is not equal to expected ("0"). func main at file srcs/test_ft_atoi.c, line 46
// [test 30] ASSERT_EQ_I failed: ("-1") is not equal to expected ("0"). func main at file srcs/test_ft_atoi.c, line 47
// [test 36] ASSERT_EQ_I failed: ("-1") is not equal to expected ("-2"). func main at file srcs/test_ft_atoi.c, line 54
// [test 37] ASSERT_EQ_I failed: ("-1") is not equal to expected ("-2"). func main at file srcs/test_ft_atoi.c, line 55

// /* 27. LONG_MAX + 1 */ ASSERT_EQ_I(atoi("9223372036854775808"), ft_atoi("9223372036854775808"));
// /* 28. LONG_MIN - 1 */ ASSERT_EQ_I(atoi("-9223372036854775809"), ft_atoi("-9223372036854775809"));
// /* 29. ULONG_MAX + 1 */ ASSERT_EQ_I(atoi("18446744073709551616"), ft_atoi("18446744073709551616"));
// /* 30. SIZE_MAX + 1 */ ASSERT_EQ_I(atoi("18446744073709551616"), ft_atoi("18446744073709551616"));
// /* 36. ULONG_MAX - 1 */ ASSERT_EQ_I(atoi("18446744073709551614"), ft_atoi("18446744073709551614"));
// /* 37. SIZE_MAX - 1 */ ASSERT_EQ_I(atoi("18446744073709551614"), ft_atoi("18446744073709551614"));

// size_t	dmax;
// size_t	smax;
// size_t	dmin;
// size_t	smin;
// dmax = LONG_MAX / 10;
// smax = LONG_MAX % 10;
// dmin = LONG_MIN / 10;
// smin = LONG_MIN % 10;
// printf ("%d\n", nb / 10);
// if (nb / 10 > dmax){
// 	printf ("yeah\n");
// 	return ((int)LONG_MAX);
// }
// if (nb / 10 == dmax && (*str - '0') > smax){
// 	printf ("yea\n");
// 	return ((int)LONG_MAX);
// }
// if (nb / 10 < dmin){
// 	printf ("yah\n");
// 	return ((int)LONG_MIN);
// }
// if (nb / 10 == dmin && (*str - '0') < smin){
// 	printf ("yh\n");
// 	return ((int)LONG_MIN);
// }