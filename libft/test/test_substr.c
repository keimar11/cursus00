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
int	main()
{
	char *dst = ft_substr("\0", 0, 0);
	printf("%s\n", dst);
	free(dst);
	printf("%zu\n", ft_strlen("\0"));
}

/*
DEAL WITH '\0'
	len = strlen(substr);
	substr("\0", 0, 1) -> Return (NULL);
	if not, would Return ("\0\0") : Wrong;
	substr("\0", 0, 0) -> Return ("\0") : Correct;
DEAL WITH OVERLAP
	start + len > strlen(s) -> ovelap
*/

