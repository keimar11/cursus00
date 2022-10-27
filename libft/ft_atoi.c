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
#define LLONG_MIN 0x8000000000000000
#define LLONG_MAX 0x7FFFFFFFFFFFFFFF
#define ULLONG_MAX 0xFFFFFFFFFFFFFFFF

int	ft_atoi(const char *str)
{
	int			i;
	int			m;
	long long	nb;

	if (str == NULL)
		return (0);
	i = 0;
	m = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m *= -1;
		i++;
	}
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i++] - '0');
	if (nb < LLONG_MIN)
		return ((int)LLONG_MIN);
	if (nb > LLONG_MAX || nb > ULLONG_MAX)
		return ((int)LLONG_MAX);
	return (m * (int)nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf ("Mine: %d\n", ft_atoi ("9223372036854775808"));
// 	printf ("Orig: %d\n", atoi ("9223372036854775808"));
// 	printf ("Mine: %d\n", ft_atoi ("-9223372036854775809"));
// 	printf ("Orig: %d\n", atoi ("-9223372036854775809"));
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