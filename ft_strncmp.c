/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:09:07 by flvoicu           #+#    #+#             */
/*   Updated: 2023/10/16 22:15:08 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (s1[a] != '\0' && s2[b] != '\0' && n > 0)
	{
		if (s1[a] != s2[b])
			return ((unsigned char)s1[a] - (unsigned char)s2[b]);
		a++;
		b++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)s1[a] - (unsigned char)s2[b]);
}
