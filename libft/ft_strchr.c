/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 17:52:35 by lshabang          #+#    #+#             */
/*   Updated: 2019/07/23 12:28:04 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*p;
	unsigned long	i;
	char			cc;
	unsigned long	len;

	i = 0;
	p = (char *)s;
	cc = (char)c;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == cc)
			return (p + i);
		i++;
	}
	return (NULL);
}
