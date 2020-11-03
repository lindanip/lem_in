/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 17:36:12 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/24 16:41:02 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*cp;
	size_t	i;

	i = 0;
	cp = dst;
	while (src[i] != '\0' && i < len)
	{
		cp[i] = src[i];
		i++;
	}
	while (i < len)
	{
		cp[i] = '\0';
		i++;
	}
	return (dst);
}
