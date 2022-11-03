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

// int	main(void)
// {
// 	char		dst[] = "ace";
// 	const char	src[] = "abcde";
// 	printf("%d\n", ft_strlcpy(dst, src, 6));
// 	printf("%s\n", dst);
// 	dst[4] = "ace";
// 	printf("%d\n", ft_strlcpy(dst, src, 7));
// 	printf("%s\n", dst);
// }

// this main() is going well, but it's wrong because we have to declare dst & src as char *;