/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:44:59 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/29 14:54:43 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*fresh;

	if (!(fresh = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	else
	{
		if (!content)
		{
			fresh->content = NULL;
			fresh->content_size = 0;
		}
		else if (!(fresh->content = (void *)malloc(content_size)))
			return (NULL);
		else
		{
			ft_memcpy(fresh->content, content, content_size);
			fresh->content_size = content_size;
		}
		fresh->next = NULL;
	}
	return (fresh);
}
