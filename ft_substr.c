/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:30:43 by flvoicu           #+#    #+#             */
/*   Updated: 2023/09/19 20:28:10 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	int		i;
	size_t	po;

	if (!s)
		return (0);
	po = ft_strlen(s);
	if (len > po - start)
		len = po - start;
	if (start >= po)
		return (ft_strdup(""));
	a = malloc((len + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (len--)
	{
		a[i] = s[start];
		i++;
		start++;
	}
	a[i] = '\0';
	return (a);
}
