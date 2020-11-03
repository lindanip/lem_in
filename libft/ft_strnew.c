/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 17:53:35 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/24 11:40:18 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	if (!(mem = (char *)malloc((size * sizeof(char)) + 1)))
		return (NULL);
	else
	{
		while (i <= size)
		{
			mem[i] = '\0';
			i++;
		}
	}
	return (mem);
}
