/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrows_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 09:23:10 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/29 15:16:33 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strrows_c(const char *s, char c)
{
	int	i;
	int row;

	i = 0;
	row = 0;
	if (!(s))
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
			row++;
		while (s[i] != c)
		{
			i++;
			if (s[i] == '\0')
				return (row);
		}
		i++;
	}
	return (row);
}
