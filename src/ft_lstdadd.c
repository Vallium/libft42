/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdadd_circ.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:49:00 by aalliot           #+#    #+#             */
/*   Updated: 2016/11/28 13:51:40 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Add a link in straight double chained list
** Default value for prev: 0
** If prev == 1, new link will be add before *alst
*/

void		ft_lstdadd(t_lstd **alst, t_lstd *new, int prev)
{
	// if (!*alst)
	// 	*alst = new;
	// else if (!(*alst)->prev)
	// {
	// 	new->next = *alst;
	// 	(*alst)->prev = new;
	// 	*alst = new;
	// }
	// else if (!(*alst)->next)
	// {
	// 	(*alst)->next = new;
	// 	new->prev = *alst;
	// }
	// else
	// {
	// 	if (prev)
	// 	{
	// 		new->next = *alst;
	// 		new->prev = (*alst)->prev;
	// 		(*alst)->prev->next = new;
	// 		(*alst)->prev = new;
	// 	}
	// 	else
	// 	{
	// 		new->next = (*alst)->next;
	// 		new->prev = *alst;
	// 		(*alst)->next->prev = new;
	// 		(*alst)->next = new
	// 	}
	// }
	if (!*alst)
		*alst = new;
	else
	{
		if (prev)
		{
			new->next = *alst;
			new->prev = (*alst)->prev;
			if ((*alst)->prev)
				(*alst)->prev->next = new;
			(*alst)->prev = new;
		}
		else
		{
			new->next = (*alst)->next;
			new->prev = *alst;
			if ((*alst)->next)
				(*alst)->next->prev = new;
			(*alst)->next = new;
		}
	}
}
