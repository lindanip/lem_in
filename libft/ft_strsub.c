/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:01:48 by lshabang          #+#    #+#             */
/*   Updated: 2019/07/23 12:11:51 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	size_t	k;

	k = 0;
	if (!s || !(fresh = (char *)malloc(len * sizeof(char) + 1)))
		return (NULL);
	while (k < len && *s != '\0')
	{
		fresh[k] = s[start + k];
		k++;
	}
	fresh[k] = '\0';
	return (fresh);
}
