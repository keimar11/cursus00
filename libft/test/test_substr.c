/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:23:20 by marvin            #+#    #+#             */
/*   Updated: 2022/11/03 21:23:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "01234";
	size_t size = 10;
	char *ret = ft_substr(str, 10, size);

	if (!strncmp(ret, "", 1))
	{
	free(ret);
	printf("TEST_SUCCESS");
	}
	free(ret);
	printf("TEST_FAILED");
}
