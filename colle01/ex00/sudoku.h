/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 12:22:41 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/15 15:34:10 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

char	**format_table(int argc, char **argv);
int		ultim_check(int y, int x, char nb_to_place, char **sudoku_table);
int		ft_check_error(int argc, char **argv);
void	ft_print_table(char **sudoku_table);
#endif
