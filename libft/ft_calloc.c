/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:41:19 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 01:41:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*save;

	if (n == 0 || size == 0)
	{
		save = malloc (1);
		if (!save)
			return (NULL);
		ft_bzero (save, 1);
		return (save);
	}
	if (n > __SIZE_MAX__ / size)
		return (NULL);
	save = malloc(n * size);
	if (!save)
		return (NULL);
	ft_bzero (save, n * size);
	return (save);
}

// (n * size > __SIZE_MAX__) -> n * size の時点でSIZE＿MAXを超えてしまう。処理できない。だから
// (n > SIZE_MAX / size) -> にする。