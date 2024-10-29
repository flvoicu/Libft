/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:34:09 by flvoicu           #+#    #+#             */
/*   Updated: 2023/09/25 20:23:01 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	t = *lst;
	if (lst == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = new;
	}
}
