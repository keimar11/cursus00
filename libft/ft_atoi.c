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
	// printf ("%ld\n", n);
	// printf ("%ld\n", jdg1);
	// printf ("%d\n", c - 48);
	// printf ("%ld\n", jdg2);
	// printf ("yah\n");
	// printf("yeh\n");
	// printf ("yeah\n");
	// printf("LONG_MAX: %ld\n", LONG_MAX);
	// printf("LONG_MIN: %ld\n", LONG_MIN);
	// printf("MAX/10: %ld\n", LONG_MAX/10);
	// printf("MAX%%10: %ld\n", LONG_MAX%10);
	// printf("MIN/10: %ld\n", LONG_MIN/10);
	// printf("MIN%%10: %ld\n", LONG_MIN%10);
	// printf("-11/10 = %d\n", -11/10);
	// printf("-11%%10 = %d\n", -11%10);