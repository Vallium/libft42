/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:22:30 by aalliot           #+#    #+#             */
/*   Updated: 2014/11/06 17:28:10 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char				*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*ret;
	char			*str;
	unsigned int	i;

	str = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	ret = str;
	while (s[i])
	{
		str[i] = (*f)(*s, i);
		i++;
	}
	str[i] = 0;
	return (ret);
}
