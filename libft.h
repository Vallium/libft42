/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:08:04 by aalliot           #+#    #+#             */
/*   Updated: 2014/11/05 13:31:26 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_atoi(const char *str);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strdup(const char *s1);
char		*ft_strncpy(char *dst, const char *src, size_t n);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *s1, const char *s2);
size_t		ft_strlen(const char *s);

#endif
