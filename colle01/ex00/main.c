/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 23:57:19 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/14 13:52:59 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "sudoku.h"

int		ft_resolve(char **sudoku_table, int pos, int count, char **suku_result)
{
	int		x;
	int		y;
	char	i;

	while (pos < 81 && sudoku_table[pos / 9][pos % 9] != '.')
		pos++;
	if (pos < 81)
	{
		i = '0';
		x = pos % 9;
		y = pos / 9;
		while (++i <= '9')
		{
			if (ultim_check(y, x, i, sudoku_table) == 1 && count < 10)
			{
				suku_result[y][x] = (count == 0) ? i : suku_result[y][x];
				sudoku_table[y][x] = i;
				count = ft_resolve(sudoku_table, pos + 1, count, suku_result);
			}
		}
		sudoku_table[y][x] = '.';
	}
	return (pos == 81 ? count + 1 : count);
}

int		valid_sudoku(char **sudoku_table)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	while (sudoku_table[i])
	{
		while (sudoku_table[i][j])
		{
			if (sudoku_table[i][j] != '.')
			{
				tmp = sudoku_table[i][j];
				sudoku_table[i][j] = '.';
				if (ultim_check(i, j, tmp, sudoku_table) == 0)
					return (1);
				else
					sudoku_table[i][j] = tmp;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	**sudoku_table;
	char	**sudoku_result;

	if (ft_check_error(argc, argv) != 0)
		write(1, "Erreur\n", 7);
	else
	{
		sudoku_result = format_table(argc, argv);
		sudoku_table = format_table(argc, argv);
		if (valid_sudoku(sudoku_table) == 1)
			write(1, "Erreur\n", 7);
		else
		{
			if (ft_resolve(sudoku_table, 0, 0, sudoku_result) == 1)
				ft_print_table(sudoku_result);
			else
				write(1, "Erreur\n", 7);
		}
	}
	return (0);
}
