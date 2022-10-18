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
	int		i;
	int		count;
	int		m;
	int		nb;

	i = 0;
	count = 0;
	m = 1;
	nb = 0;
	if (str == NULL)
		return (0);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	if (count % 2 == 1)
		m *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
		if (! (str[i] >= '0' || str[i] <= '9'))
			break ;
	}
	return (m * nb);
}

// int main()  
// {  
//     char str[] = "-++++-----++-23233.1234567890";     
//     // Function call  
//     int val = ft_atoi(str);  
//     printf("%d ", val);  
//     return 0;  
// }  
