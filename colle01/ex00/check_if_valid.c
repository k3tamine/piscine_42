/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 00:15:28 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/14 05:20:33 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_row(int row, char nb_to_place, char **sudoku_table)
{
	int	column;

	column = 0;
	while (column < 9)
	{
		if (sudoku_table[row][column] == nb_to_place)
			return (0);
		column++;
	}
	return (1);
}

int		ft_check_column(int column, char nb_to_place, char **sudoku_table)
{
	int row;

	row = 0;
	while (row < 9)
	{
		if (sudoku_table[row][column] == nb_to_place)
			return (0);
		row++;
	}
	return (1);
}

int		ft_check_block(int column, int row, char nb_to_place, char **sud_table)
{
	int	first_block_col;
	int first_block_row;

	first_block_col = column - (column % 3);
	first_block_row = row - (row % 3);
	column = first_block_col;
	row = first_block_row;
	while (row < first_block_row + 3)
	{
		while (column < first_block_col + 3)
		{
			if (sud_table[row][column] == nb_to_place)
				return (0);
			column++;
		}
		column = first_block_col;
		row++;
	}
	return (1);
}

int		ultim_check(int row, int column, char nb_to_place, char **sudoku_table)
{
	if (ft_check_row(row, nb_to_place, sudoku_table) == 1)
	{
		if (ft_check_column(column, nb_to_place, sudoku_table) == 1)
		{
			if (ft_check_block(column, row, nb_to_place, sudoku_table) == 1)
			{
				return (1);
			}
		}
	}
	return (0);
}
