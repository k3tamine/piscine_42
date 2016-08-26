/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusylvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 00:12:36 by jusylvai          #+#    #+#             */
/*   Updated: 2016/08/14 00:12:37 by jusylvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_table(char **sudoku_table)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (sudoku_table[y])
	{
		while (sudoku_table[y][x])
		{
			write(1, &sudoku_table[y][x], 1);
			if (sudoku_table[y][x + 1] != '\0')
				write(1, " ", 1);
			x++;
		}
		x = 0;
		y++;
		write(1, "\n", 1);
	}
}
