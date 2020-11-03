/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 17:50:25 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/24 12:34:35 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*mem;

	i = 0;
	if (!(mem = (void *)malloc(size * sizeof(void))))
		return (NULL);
	else
	{
		while (i < size)
		{
			mem[i] = 0;
			i++;
		}
	}
	return (mem);
}
