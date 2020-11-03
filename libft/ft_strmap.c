/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 17:58:43 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/29 14:13:19 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*p;
	char	*fresh;

	i = 0;
	p = (char *)s;
	if (!s)
		return (NULL);
	if (!(fresh = (char *)malloc(ft_strlen(s) * sizeof(char) + 1)))
		return (NULL);
	else
	{
		while (s[i] != '\0')
		{
			fresh[i] = f(p[i]);
			i++;
		}
		fresh[i] = '\0';
	}
	return (fresh);
}
