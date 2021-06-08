/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 22:04:01 by hyejung           #+#    #+#             */
/*   Updated: 2021/06/08 13:43:25 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h> //

void	check_num(char	*str)
{
	long long	num;

	if (str[0] != '-' && !(str[0] >= '0' && str[0] <= '9'))
	{
		write(1, "Error\n", 7);
		exit (1);
	}
	num = ft_atoi2(str);
	if (num > 2147483647 || num < -2147483648)
	{
		write(1, "Error\n", 7);
		exit (1);
	}
}

int	main(int argc, char *argv[]) // argc = a.out 포함한 입력 개수(1부터 원하는 값 나옴)
{
	int		i;
	int		j;
	int		num;
	t_dli*	li;

	i = 1;
	li = (t_dli *)malloc(sizeof(t_dli));
	dli_init(li);
	if (argc <= 1)
		return (0);
	while (i < argc) // 중복 체크
	{
		j = 1;
		check_num(argv[i]);
		num = ft_atoi(argv[i]);
		while (j < i)
		{
			if (ft_strncmp(argv[j], argv[i], ft_strlen(argv[i])) == 0)
			{
				write(1, "Error\n", 7);
				return (0);
			}
			j++;
		}
		dli_insert(li, num);
		i++;
	}
	dli_print(li);
	sa(li);
	printf("----\n");
	//del(li);
	dli_print(li);
}
