/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 22:54:59 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/20 16:32:42 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_putchar(char c);
void	colle(int x, int y);

int		main(int argc, char **argv)
{
	argc = 3;
	colle(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
