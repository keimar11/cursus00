/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 00:45:45 by marvin            #+#    #+#             */
/*   Updated: 2022/11/04 00:45:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char c[256] = "42tokyo";
	printf("%d\n",ft_strlcpy(NULL  , "aiueo", 0));  // 5 
	printf("%d\n",ft_strlcpy(NULL  , "aiueo", 2));  // segmentation fault
	printf("%d\n",ft_strlcpy(c     , NULL   , 0));  // segmentation fault  
	printf("%d\n",ft_strlcpy(c     , NULL   , 2));  // segmentation fault
	printf("%d\n",ft_strlcpy(NULL  , NULL   , 0));  // segmentation fault
	printf("%d\n",ft_strlcpy(NULL  , NULL   , 2));  // segmentation fault
	// strlcatも同様
}

// this main() is going well, but it's wrong because we have to declare dst & src as char *;