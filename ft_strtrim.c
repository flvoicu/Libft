/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvoicu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:53:23 by flvoicu           #+#    #+#             */
/*   Updated: 2023/09/18 23:15:56 by flvoicu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ch(char *s, char a)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			return (1);
		i++;
	}
	return (0);
}

static char	*create(int i, int j, char const *s, char const *c)
{
	char	*ptr;
	int		a;

	a = 0;
	if (j > i || !ch((char *)c, s[i]))
	{
		ptr = malloc((j - i + 2) * sizeof(char));
		if (ptr == NULL)
			return (0);
		while (i <= j)
		{
			ptr[a] = s[i];
			a++;
			i++;
		}
		ptr[a] = '\0';
	}
	else
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (0);
		ptr[a] = '\0';
	}
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ptr;

	j = ft_strlen(s1) - 1;
	i = 0;
	while (i < j && ch((char *)set, s1[i]))
		i++;
	while (j > i && ch((char *)set, s1[j]))
		j--;
	ptr = create(i, j, s1, set);
	return (ptr);
}
