/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:53:31 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/23 13:56:25 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*ptr;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	ptr = (char *)b;
	while (i < len)
	{
		ptr[i] = cc;
		i++;
	}
	return (ptr);
}
