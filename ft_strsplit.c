/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 13:56:26 by aalliot           #+#    #+#             */
/*   Updated: 2014/11/10 19:47:33 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	nb_words(const char *s, char c)
{
	size_t		i;
	size_t		j;

	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != c)
			{
				if (!s[i])
					return (j);
				i++;
			}
		}
		i++;
	}
	return (j);
}

static size_t	word_len(const char *s, size_t i, char c)
{
	size_t		j;

	j = 0;
	while (s[i] != c && s[i])
	{
		i++;
		j++;
	}
	return (j);
}

char			**ft_strsplit(const char *s, char c)
{
	char		**dst;
	size_t		i;
	size_t		nb;
	size_t		nb_max;

	i = 0;
	nb = 0;
	if (!s)
		return (0);
	nb_max = nb_words(s, c);
	i = 0;
	dst = (char**)malloc(sizeof(char*) * (nb_max + 1));
	if (!dst)
		return (NULL);
	if (!nb_max)
	{
		*dst = 0;
		return (dst);
	}
	while (nb < nb_max)
	{
		while (s[i] == c)
			i++;
		dst[nb] = ft_strsub(s, i, word_len(s, i, c));
		while (s[i] && s[i] != c)
			i++;
		nb++;
	}
	return (dst);
}
