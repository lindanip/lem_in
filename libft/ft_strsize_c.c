/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsize_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 09:22:25 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/29 15:19:49 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strsize_c(char const *s, char c, int start)
{
	int	i;

	i = 0;
	if ((size_t)start >= ft_strlen(s))
		return (0);
	while (s[start] != c && s[start] != '\0')
	{
		start++;
		i++;
	}
	return (i);
}
