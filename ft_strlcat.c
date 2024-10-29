/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:15:39 by flvoicu           #+#    #+#             */
/*   Updated: 2023/10/16 22:10:48 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int		check;
	unsigned int		count;
	char				*s;

	count = 0;
	check = 0;
	s = (char *)src;
	while (src[check] != '\0')
		check++;
	while (dest[count] != '\0')
		count++;
	if (size == 0 || size < count)
		return (check + size);
	dest = dest + count;
	while (*s != '\0' && 1 < size - count)
	{
		*dest = *s;
		s++;
		dest++;
		size--;
	}
	*dest = '\0';
	return (check + count);
}
