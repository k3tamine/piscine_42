/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 13:37:10 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/22 22:11:50 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

int	check_error(char op, int nb)
{
	if (op == '/' && nb == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	if (op == '%' && nb == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (2);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*op;
	int		i;
	char	arg_op;

	i = 0;
	op = "+-*/%";
	if (argc != 4)
		return (0);
	arg_op = argv[2][0];
	if (check_error(arg_op, ft_atoi(argv[3])) > 0)
		return (0);
	while (op[i])
	{
		if (arg_op == op[i])
		{
			ft_putnbr(g_opptab[i].p(ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	ft_usage(0, 0);
	return (0);
}
