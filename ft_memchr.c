/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:36:51 by flvoicu           #+#    #+#             */
/*   Updated: 2023/09/19 21:09:35 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*a;
	char	b;

	i = 0;
	a = (char *)s;
	b = (char) c;
	while (n > i)
	{
		if (a[i] == b)
			return (a + i);
		i++;
	}
	return ((void *)0);
}
