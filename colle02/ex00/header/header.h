/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 15:54:01 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/21 20:43:57 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
char	*colle_00(int x, int y);
char	*colle_01(int x, int y);
char	*colle_02(int x, int y);
char	*colle_03(int x, int y);
char	*colle_04(int x, int y);
void	ft_print_solution(int colle_nb, int width, int height, int *i);
void	ft_print(char *input, int width, int height);
#endif
