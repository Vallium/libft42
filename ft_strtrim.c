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

char			*ft_strtrim(const char *s)
{
	char		*dst;
	char		*ret;
	size_t		i;
	size_t		e;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	e = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		e--;
	dst = (char*)malloc(sizeof(char) * ((e - i) + 1));
	ret = dst;
	while (i <= e)
	{
		*dst++ = s[i];
		i++;
	}
	dst[i] = 0;
	return (ret);
}
