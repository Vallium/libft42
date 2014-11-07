/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:20:02 by aalliot           #+#    #+#             */
/*   Updated: 2014/11/07 17:13:42 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t		ft_count(const char *s, char c)
{
	size_t			i;

	i = 0;
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1))
			i++;
		s++;
	}
	return (i);
}

static void			ft_fill(char **tab, const char *s, char c)
{
	while (*s++)
	{
		if (*s != c)
			**tab++ = *s++;
		while (*s++ == c)
		while (*s != c)
			**tab++ = *s++;
	}
}

char				**ft_strsplit(const char *s, char c)
{
	char	**tab;
	size_t	i;

	tab = (char**)malloc(sizeof(char*) * ft_count(s, c));
	while (**tab++)
	{
		i = 0;
		while (*s++ == c)
		while (*s != c)
		{
			i++;
		}
		*tab = (char*)malloc(sizeof(char) * (i + 1));
	}
	ft_fill(tab, s, c);
	return (tab);
}
