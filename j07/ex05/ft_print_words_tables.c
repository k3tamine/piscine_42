/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 08:56:47 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/17 15:42:36 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_print_words_tables(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		i++;
		ft_putchar('\n');
	}
}

/*
**int	main(int argc, char **argv)
**{
**	char	**tab;
**	tab = ft_split_whitespaces(argv[1]);
**	ft_print_words_tables(tab);
**}
*/
