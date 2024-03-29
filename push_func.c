/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 18:37:12 by hyejung           #+#    #+#             */
/*   Updated: 2021/06/06 19:33:09 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	checkspace2(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return (1);
	else
		return (0);
}

long long	ft_atoi2(const char *str)
{
	int			i;
	int			minus;
	long long	num;
	int			count;

	i = 0;
	num = 0;
	count = 0;
	while ((str[i] != '\0') && (checkspace2((char)str[i]) == 1))
		i++;
	minus = ((char)str[i] == '-') ? -1 : 1;
	if ((char)str[i] == '+' || minus == -1)
		i++;
	while ((char)str[i] >= '0' && (char)str[i] <= '9' && str[i])
		num = (num * 10) + ((char)str[i++] - '0');
	return (minus * num);
}

