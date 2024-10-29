/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:13:35 by flvoicu           #+#    #+#             */
/*   Updated: 2023/09/15 18:31:46 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	char	*tmp;
	size_t	c;

	tmp = (char *)to_find;
	while (*str != '\0' && *to_find != '\0' && n > 0)
	{
		c = 0;
		if (*str == *to_find)
		{
			while (*to_find != '\0' && *to_find == str[c] && n > c)
			{
				to_find++;
				c++;
			}
		}
		if (*to_find != '\0')
		{
			to_find = tmp;
			str++;
		}
		n--;
	}
	if (*to_find == '\0')
		return ((char *)str);
	return (0);
}
