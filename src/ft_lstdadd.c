/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:49:00 by aalliot           #+#    #+#             */
/*   Updated: 2016/11/28 13:51:40 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdadd(t_lstd **alst, t_lstd *new)
{
	if (!*alst)
	{
		new->next = new;
		new->prev = new;
		*alst = new;
	}
	else
	{
		new->prev = (*alst)->prev;
		new->next = *alst;
		(*alst)->prev->next = new;
		(*alst)->prev = new;
	}
}
