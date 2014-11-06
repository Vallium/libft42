/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:55:01 by aalliot           #+#    #+#             */
/*   Updated: 2014/11/06 18:09:59 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char		*dst;

	dst = (char*)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	while (len--)
		*dst = s[start++];
	*dst = 0;
	return (dst);
}
