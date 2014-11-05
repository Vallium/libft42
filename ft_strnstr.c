/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:37:53 by aalliot           #+#    #+#             */
/*   Updated: 2014/11/05 15:43:33 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_scan(const char *s1, const char *s2)
{
	int			i;

	i = 0;
	while (s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int			i;
	char		*str;

	str = (char*)s1;
	if (!*s2)
		return (str);
	i = 0;
	if (n < ft_strlen(s2))
		return (NULL);
	while (str[i] && n--)
	{
		if (str[i] == s2[0])
			if (ft_scan(&str[i], s2))
				return (&str[i]);
		i++;
	}
	return (NULL);
}
