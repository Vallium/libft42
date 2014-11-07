/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:57:43 by aalliot           #+#    #+#             */
/*   Updated: 2014/11/07 14:28:26 by aalliot          ###   ########.fr       */
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
	char				*ret;
	char				*str;
	size_t				i;
	size_t				e;

	if (!s)
		return (NULL);
	str = (char*)s;
	i = 0;
	while (ft_sp(*str++))
		i++;
	str--;
	e = ft_strlen(s) - 1;
	if (i != (e + 1))
		while (ft_sp(s[e]))
			e--;
	dst = (char*)malloc(sizeof(char) * (e - i + 1));
	if (!dst)
		return (NULL);
	ret = dst;
	while (i <= e)
	{
		*dst++ = *str++;
		i++;
	}
	*dst = 0;
	return (ret);
}
