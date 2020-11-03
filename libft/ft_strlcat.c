/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 17:57:18 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/30 06:06:39 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(dst);
	l2 = ft_strlen(src);
	if (dstsize < l1)
		return (dstsize + l2);
	else if (dstsize > l1)
		ft_strncat(dst, src, dstsize - l1 - 1);
	return (l1 + l2);
}
