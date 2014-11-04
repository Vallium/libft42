/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 10:58:17 by aalliot           #+#    #+#             */
/*   Updated: 2014/11/04 15:15:53 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t			ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
