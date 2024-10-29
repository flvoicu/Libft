/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:31:45 by flvoicu           #+#    #+#             */
/*   Updated: 2023/09/23 19:40:52 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *) dst;
	b = (char *) src;
	if (dst == src || n == 0)
		return (dst);
	if (dst == NULL && src == NULL)
		return (0);
	while (n--)
		*a++ = *b++;
	return (dst);
}
