/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:14:09 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/29 14:13:49 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;
	char			*fresh;

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
			fresh[i] = f(i, p[i]);
			i++;
		}
		fresh[i] = '\0';
	}
	return (fresh);
}
