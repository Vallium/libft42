/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_double.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:42:22 by aalliot           #+#    #+#             */
/*   Updated: 2016/11/14 16:43:32 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_DOUBLE_H
# define LST_DOUBLE_H

typedef struct			s_list_db
{
	void				*content;
	size_t				content_size;
	struct s_list_db	*next;
	struct s_list_db	*prev;
}						t_list_db;

void					ft_lstpushback_dbl(t_list_db **start, t_list_db *nw);
void					ft_lstsmartpushback_dbl(t_list_db **start, t_list_db *nw);
void					ft_lstadd_dbl(t_list_db **alst, t_list_db *nw);
t_list_db				*ft_lstnew_dbl(const void *content, size_t content_size);

#endif
