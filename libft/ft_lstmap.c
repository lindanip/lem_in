/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 23:50:45 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/29 05:34:44 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*p;
	t_list	*p1;

	if (!lst || !f || !(p = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	p1 = f(lst);
	p = p1;
	while (lst->next)
	{
		lst = lst->next;
		if (!(p1->next = f(lst)))
		{
			free(p1->next);
			return (NULL);
		}
		p1 = p1->next;
	}
	return (p);
}
