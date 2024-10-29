/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:45:58 by flvoicu           #+#    #+#             */
/*   Updated: 2023/10/16 22:09:07 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	unsigned int		count;
	char				*s;

	s = (char *)src;
	count = 0;
	while (*s && count < n - 1 && n > 0)
	{
		*dest = *s;
		dest++;
		s++;
		count++;
	}
	if (count < n)
		*dest = '\0';
	while (*s)
	{
		s++;
		count++;
	}
	return (count);
}
