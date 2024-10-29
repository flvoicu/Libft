/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:26:44 by flvoicu           #+#    #+#             */
/*   Updated: 2023/09/24 17:37:35 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*t;
	int		l;

	l = ft_strlen(s);
	t = malloc ((l + 1) * sizeof(char));
	if (t == NULL)
		return (0);
	t[l] = '\0';
	while (l--)
		t[l] = f(l, s[l]);
	return (t);
}
