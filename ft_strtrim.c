/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:57:43 by aalliot           #+#    #+#             */
/*   Updated: 2014/11/09 20:08:54 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int		ft_sp(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char					*ft_strtrim(const char *s)
{
	char				*dst;
	size_t				i;
	size_t				e;

	if (!s)
		return (NULL);
	i = 0;
	while (ft_sp(*s++))
		i++;
	s -= i + 1;
	e = ft_strlen(s) - 1;
	if (!*s || e == i - 1)
	{
		dst = (char*)malloc(sizeof(char));
		*dst = 0;
		return (dst);
	}
	if (i != (e + 1))
		while (ft_sp(s[e]))
			e--;
	dst = (char*)malloc(sizeof(char) * (e - i + 1));
	if (!dst)
		return (NULL);
	dst = ft_strsub(s, i, (e - i + 1));
	return (dst);
}
