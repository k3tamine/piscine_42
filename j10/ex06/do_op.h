/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:08:41 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/18 17:33:16 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				add(int a, int b);
int				sub(int a, int b);
int				mul(int a, int b);
int				div(int a, int b);
int				mod(int a, int b);
typedef struct	s_opp
{
	char	op;
	int		(*p)(int a, int b);
}				t_opp;
#endif
