/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:00:08 by lshabang          #+#    #+#             */
/*   Updated: 2019/07/03 16:58:18 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;
	int		k;

	if (s1 && s2)
	{
		i = 0;
		while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
			i++;
		k = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (k == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
