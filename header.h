/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 22:04:49 by hyejung           #+#    #+#             */
/*   Updated: 2021/06/07 22:12:14 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include "./libft/libft.h"
#include <stdlib.h> //malloc,exit
#include <unistd.h> //write,read

typedef struct		s_dli
{
	int				data;
	struct s_dli*	llink;
	struct s_dli*	rlink;
}					t_dli;

long long			ft_atoi2(const char *str);
void				sa(t_dli *li);

#endif
