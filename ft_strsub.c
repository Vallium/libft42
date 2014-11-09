/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:55:01 by aalliot           #+#    #+#             */
/*   Updated: 2014/11/09 17:59:18 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char		*dst;
	char		*ret;

	if (!s)
		return (NULL);
	dst = (char*)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	ret = dst;
	while (len--)
		*dst++ = s[start++];
	*dst = 0;
	return (ret);
}
