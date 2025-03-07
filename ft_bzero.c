/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:36:26 by flvoicu           #+#    #+#             */
/*   Updated: 2023/09/15 18:06:47 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	ft_bzero(void *s, unsigned int n)
{
	char	*a;

	a = (char *) s;
	while (n > 0)
	{
		*a = 0;
		a++;
		n--;
	}
}
