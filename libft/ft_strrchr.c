/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 17:59:36 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/28 09:48:51 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;
	char	cc;

	i = ft_strlen(s);
	p = (char *)s;
	cc = (char)c;
	if (!s)
	{
		return (NULL);
	}
	while (i >= 0)
	{
		if (p[i] == cc)
		{
			return (p + i);
		}
		i--;
	}
	return (NULL);
}
