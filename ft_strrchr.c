/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:57:01 by aalliot           #+#    #+#             */
/*   Updated: 2014/11/04 18:11:23 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i < 0)
	{
		if (!(*s))
			return (NULL);
		i--;
	}
	return ((char*)s);
}
