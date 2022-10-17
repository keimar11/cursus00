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

double	ft_atoi(char *str)
{
	int		i;
	int		count;
	double	m;
	double	nb;

	i = 0;
	count = 0;
	m = 1;
	nb = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	if (count % 2 == 1)
		m = m * -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
		if (! (str[i] >= '0' || str[i] <= '9'))
			break ;
	}
	return (m * nb);
}
