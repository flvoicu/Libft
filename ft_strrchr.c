/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:27:51 by flvoicu           #+#    #+#             */
/*   Updated: 2023/10/16 22:03:29 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		a;
	char	*b;

	b = (char *)s;
	i = 0;
	a = -1;
	while (c >= 256)
		c -= 256;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			a = i;
		i++;
	}
	if (s[i] == c)
		a = i;
	if (a >= 0)
		return (b + a);
	return (NULL);
}
