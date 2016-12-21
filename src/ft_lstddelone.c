/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstddelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:12:27 by aalliot           #+#    #+#             */
/*   Updated: 2016/11/28 14:28:51 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_lstddelone(t_lstd **alst, void (*del)(void *, size_t))
{
	t_lstd	*next;
	t_lstd	*prev;

	if (alst)
	{
		next = (*alst)->next;
		prev = (*alst)->prev;
		(*del)((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
		if (prev)
			prev->next = next;
		if (next)
			next->prev = prev;
	}
}
