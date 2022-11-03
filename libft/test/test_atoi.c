/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:33:45 by marvin            #+#    #+#             */
/*   Updated: 2022/11/03 14:33:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	printf("%d\n", ft_atoi("11"));
	printf("%d\n", atoi("11"));
	printf("%d\n", ft_atoi("-11"));
	printf("%d\n", atoi("-11"));
	printf("%d\n", ft_atoi("+11"));
	printf("%d\n", atoi("+11"));
	printf("%d\n", ft_atoi("--+11"));
	printf("%d\n", atoi("--+11"));
	printf("%d\n", ft_atoi("   /t   /n  /f  /v/r-11"));
	printf("%d\n", atoi("   /t   /n  /f  /v/r-11"));
	printf("%d\n", ft_atoi("1a 1"));
	printf("%d\n", atoi("1a 1"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", atoi(""));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", atoi("2147483647"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", atoi("-2147483648"));
	printf("%d\n", ft_atoi("-11111111111"));
	printf("%d\n", atoi("-11111111111"));
	printf("%d\n", ft_atoi("9223372036854775807"));
	printf("%d\n", atoi("9223372036854775807"));
	printf("%d\n", ft_atoi("-9223372036854775808"));
	printf("%d\n", atoi("-9223372036854775808"));
}
