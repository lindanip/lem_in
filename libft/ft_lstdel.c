/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 13:02:50 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/28 23:25:33 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *p;
	t_list *p1;

	p = *alst;
	while (p != NULL)
	{
		p1 = p->next;
		del(p->content, p->content_size);
		free(p);
		p = p1;
	}
	*alst = NULL;
}
