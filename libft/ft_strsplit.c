/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 15:00:18 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/30 05:16:31 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**fresh;
	int		i;
	int		k;
	int		z;

	i = -1;
	k = 0;
	if (!s || ft_strsize(s, c) == 1)
		return (NULL);
	if (!(fresh = (char **)malloc(sizeof(char *) * (ft_strrows_c(s, c) + 1))))
		return (NULL);
	while (ft_strlen(s) > (size_t)(++i))
		if (s[i] != c && s[i] != '\0')
		{
			if (!(fresh[k] = (char *)malloc(sizeof(char) *
							ft_strsize_c(s, c, i) + 1)))
				return (NULL);
			z = 0;
			while (s[i] != c && ((size_t)i) <= ft_strlen(s))
				fresh[k][z++] = s[i++];
			fresh[k][z] = '\0';
			k++;
		}
	fresh[k] = NULL;
	return (fresh);
}
