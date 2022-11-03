/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 00:14:57 by marvin            #+#    #+#             */
/*   Updated: 2022/11/04 00:14:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	printf ("%d\n", strncmp("", "012", 3));
	printf ("%d\n", ft_strncmp("", "012", 3));
	printf ("%d\n", strncmp("012", "", 3));
	printf ("%d\n", ft_strncmp("012", "", 3));
	printf ("%d\n", strncmp("321", "012", 0));
	printf ("%d\n", ft_strncmp("321", "012", 0));
}
