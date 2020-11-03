/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 11:08:29 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/30 13:12:37 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*fresh;
	int		start;
	int		end;

	start = 0;
	if (!s)
		return (NULL);
	if (!(*s))
		return ("\0");
	end = ft_strlen(s);
	if (end == 0)
		return ("\0");
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	if (s[start] == '\0')
		return (ft_strdup(&s[start]));
	if (s[end] == '\0')
		end--;
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	end = end + 1;
	fresh = ft_strsub(s, start, (end - start));
	if (fresh == NULL)
		return (NULL);
	return (fresh);
}
