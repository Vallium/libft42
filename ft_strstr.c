/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:17:32 by aalliot           #+#    #+#             */
/*   Updated: 2014/11/05 10:37:47 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int		ft_scan(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

char			*ft_strstr(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	if (!s2[0])
		return ((char*)s1);
	while (s1[i])
	{
		if (s1[i] == s2[i])
			if (ft_scan(&s1[i], s2))
				return ((char*)&s1[i]);
		i++;
	}
	return (NULL);
}
