/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:07:36 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/23 15:36:12 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char			*cp;
	unsigned long	i;

	i = 0;
	cp = dst;
	while (i <= ft_strlen(src))
	{
		cp[i] = src[i];
		i++;
	}
	return (dst);
}
