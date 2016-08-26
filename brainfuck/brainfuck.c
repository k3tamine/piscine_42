/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 14:59:53 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/26 08:10:40 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		close_bracket(char *str, int i)
{
	int	stop;

	stop = 1;
	while (stop != 0)
	{
		i--;
		if (str[i] == ']')
			stop++;
		if (str[i] == '[')
			stop--;
	}
	return (i);
}
int		open_bracket(char *str, int i)
{
	int	stop;

	stop = 1;
	while (stop != 0)
	{
		i++;
		if (str[i] == '[')
			stop++;
		if (str[i] == ']')
			stop--;
	}
	return (i);
}
void	brainfuck(char *str)
{
	int		i;
	int		j;
	char	*brain;

	i = 0;
	j = 0;
	brain = (char *)malloc(sizeof(*brain) * 2600);
	if (!brain)
		return ;
	while (str[i])
	{
		if (str[i] == '>' || str[i] == '<')
			j += str[i] - 61;
		if (str[i] == '+' || str[i] == '-')
			brain[j] = brain[j] + (44 - str[i]);
		if (str[i] == '.')
			ft_putchar(brain[j]);
		if (str[i] == '[' && brain[j] == 0)
			i = open_bracket(str, i);
		if (str[i] == ']' && brain[j] != 0)
			i = close_bracket(str, i);
		i++;
	}
}

int		main(int argc, char **argv)
{
	brainfuck(argv[1]);
}
