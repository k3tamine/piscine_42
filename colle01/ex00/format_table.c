/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-1_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 22:26:33 by jgraille          #+#    #+#             */
/*   Updated: 2016/08/13 23:58:55 by jgraille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**format_table(int argc, char **argv)
{
	char	**position;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	position = malloc(sizeof(*position) * 9);
	while (i < 9)
	{
		position[i] = malloc(sizeof(**position) * 9);
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		while (i2 < 9)
		{
			position[i][i2] = argv[i + 1][i2];
			i2++;
		}
		i2 = 0;
		i++;
	}
	return (position);
}
