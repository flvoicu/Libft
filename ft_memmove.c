/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove..c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:32:10 by flvoicu           #+#    #+#             */
/*   Updated: 2023/09/23 19:40:36 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	if (dst == NULL && src == NULL)
		return (0);
	s = (char *) src;
	d = (char *) dst;
	if (s < d && s + len > d)
	{
		s = s + len;
		d = d + len;
		while (len--)
			*(--d) = *(--s);
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
