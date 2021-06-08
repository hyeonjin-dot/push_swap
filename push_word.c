/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 21:30:35 by hyejung           #+#    #+#             */
/*   Updated: 2021/06/08 13:44:47 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h> //

void	swap(int *i, int *j)
{
	int	tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}

void	sa(t_dli *li)
{
	li = li->llink;
	swap(&(li->data), &(li->llink->data));
	li = li->rlink;
	write(1, "sa\n", 4);
}

void	ra(t_dli *li) // 아래로, r 방향으로 값이 추가됨
{
	t_dli	*tmp;

	tmp = (t_dli *)malloc(sizeof(t_dli));
	tmp->llink = tmp;
	tmp->rlink = li;
	while (li->rlink != NULL)
		li = li->rlink;
	tmp->data = li->data;
	//del(li);
	write(1, "ra\n", 4);
}
