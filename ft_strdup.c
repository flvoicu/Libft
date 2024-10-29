/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:59:14 by flvoicu           #+#    #+#             */
/*   Updated: 2023/09/15 21:22:08 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*str;

	len = ft_strlen(s1);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	str[len] = '\0';
	while (len--)
		str[len] = s1[len];
	return (str);
}
