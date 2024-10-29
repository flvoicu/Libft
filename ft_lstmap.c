/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:57:35 by flvoicu           #+#    #+#             */
/*   Updated: 2023/10/16 23:31:29 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*t;
	char	*a;

	if (!lst || !f || !del)
		return (0);
	l = NULL;
	while (lst)
	{
		a = f(lst->content);
		t = ft_lstnew(a);
		if (t == NULL || a == NULL)
		{
			del(a);
			free(t);
			ft_lstclear(&l, del);
			return (0);
		}
		ft_lstadd_back(&l, t);
		lst = lst->next;
	}
	return (l);
}
