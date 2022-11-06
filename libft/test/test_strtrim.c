/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:39:56 by marvin            #+#    #+#             */
/*   Updated: 2022/11/03 21:39:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*src;

	str = ft_strtrim("abc", "c");
	printf("%s\n", str);
	free(str);
	src = ft_strtrim("   abc", "\0");
	printf("%s\n", str);
	free(src);
	printf("%d\n", (' ' == '\0'));
}