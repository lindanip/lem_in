/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 17:29:35 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/30 10:33:34 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	int				k;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	k = 1;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n < 1)
		return (0);
	while (p1[i] == p2[i])
	{
		if (i == (n - 1))
			return (0);
		i++;
		if (p1[i] == '\0' && p2[i] == '\0')
			return (0);
	}
	if ((p1[i] - p2[i]) < 0)
		k = -1;
	return (k);
}
