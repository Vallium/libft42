/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:51:09 by aalliot           #+#    #+#             */
/*   Updated: 2014/11/06 17:01:45 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_strmap(const char *s, char (*f)(char))
{
	char		*ret;

	ret = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ret)
		return (NULL);
	while (*s)
	{
		*ret = f(*s);
		ret++;
		s++;
	}
	*ret = 0;
	return (ret);
}
