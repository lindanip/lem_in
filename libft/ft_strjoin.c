/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:03:37 by lshabang          #+#    #+#             */
/*   Updated: 2019/07/23 12:17:12 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		i;
	int		k;
	int		size;

	i = 0;
	k = 0;
	if ((!s1 || !s2) || (!s1 && !s2))
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(fresh = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s1[i] != '\0')
		fresh[k++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		fresh[k++] = s2[i++];
	fresh[k] = '\0';
	return (fresh);
}
