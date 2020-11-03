/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 17:32:38 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/23 16:25:25 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	int				k;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	k = 1;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (p1[i] == p2[i])
	{
		i++;
		if (p1[i] == '\0' && p2[i] == '\0')
		{
			return (0);
		}
	}
	if ((p1[i] - p2[i]) < 0)
	{
		k = -1;
	}
	return (k);
}
