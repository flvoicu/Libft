/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:55:34 by flvoicu           #+#    #+#             */
/*   Updated: 2023/10/16 22:38:58 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n > 0 || n < 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*fill(int i, char *p, int n)
{
	int	neg;

	neg = 1;
	if (n < 0)
	{
		*p = '-';
		neg = -1;
		i++;
	}
	p[i] = '\0';
	while (i-- > 1)
	{
		if (p[i] != '-')
			p[i] = (n % 10) * neg + '0';
		n /= 10;
	}
	if (neg > 0)
		p[i] = (n % 10) * neg + '0';
	return (p);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		i;

	i = len(n);
	if (n < 0)
		p = malloc ((i + 2) * sizeof(char));
	else
		p = malloc ((i + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	return (fill(i, p, n));
}
