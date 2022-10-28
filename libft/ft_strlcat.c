/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:49:02 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 00:49:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen (dst);
	src_len = ft_strlen (src);
	if (dst_len > size || size < 1)
		return (size + src_len);
	i = 0;
	while (*dst)
		dst += dst_len;
	while (i < size - ft_strlen (dst) - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (size + src_len);
}

// int	main(void)
// {
// 	char *dst1 = calloc(100, sizeof(char));
// 	char *dst2 = calloc(100, sizeof(char));
// 	char *src1 = calloc(100, sizeof(char));
// 	char *src2 = calloc(100, sizeof(char));
// 	for (int i = 0; i < 99; i++)
// 	{
// 	src1[i] = i + 1;
// 	src2[i] = i + 1;
// 	}
// 	(ft_strlcat(dst1, src1, 0), strlcat(dst2, src2, 0));
// 	printf("%s, %s \n", dst1, dst2);
// 	(ft_strlcat(dst1, src1, 50), strlcat(dst2, src2, 50));
// 	printf("%s, %s \n", dst1, dst2);
// 	(ft_strlcat(dst1, src1, 100), strlcat(dst2, src2, 100));
// 	printf("%s, %s \n", dst1, dst2);
// 	(ft_strlcat(dst1, src1, 10), strlcat(dst2, src2, 10));
// 	printf("%s, %s \n", dst1, dst2);
// 	(ft_strlcat(dst1, src1, 100), strlcat(dst2, src2, 100));
// 	printf("%s, %s \n", dst1, dst2);
// 	(ft_strlcat(NULL, src1, 0), strlcat(NULL, src2, 0));
// 	printf("%s, %s \n", dst1, dst2);
// }