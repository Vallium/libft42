/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:33:04 by aalliot           #+#    #+#             */
/*   Updated: 2014/11/04 14:22:06 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	s2 = (char*)malloc(i * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (i != 0)
	{
		s2[i] = s1[i];
		i--;
	}
	return (s2);
}
