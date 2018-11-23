/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlenskyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 17:54:01 by dlenskyi          #+#    #+#             */
/*   Updated: 2018/10/30 17:54:02 by dlenskyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*p;
	t_list	*buf;

	if (!lst || !f)
		return (NULL);
	p = f(lst);
	buf = p;
	lst = lst->next;
	while (lst)
	{
		buf->next = f(lst);
		buf = buf->next;
		lst = lst->next;
	}
	return (p);
}
