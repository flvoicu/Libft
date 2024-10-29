/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:29:13 by flvoicu           #+#    #+#             */
/*   Updated: 2023/09/25 20:48:18 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	tmp = *lst;
	if (tmp == NULL)
		return ;
	while (tmp)
	{
		del(tmp->content);
		tmp = tmp->next;
		free (*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
