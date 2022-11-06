/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:55:35 by marvin            #+#    #+#             */
/*   Updated: 2022/11/06 16:55:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
int	main(void)
{
	char str[100] = "I am Cui.";
	printf("%s\n", ft_strjoin(str, "I want you!"));
}

/*
NULL BLOCK
	s1 or s2 = NULL -> return(NULL) : Error of strlen;
'\0' TREATMEMT
	if s1 not but s2 = '\0', return (nstr = s1);
	if s1 = '\0' but s2 not, return (nstr = s2);
	Concatenate string s1 & s2;
*/