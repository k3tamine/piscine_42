/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 23:01:25 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/07 21:09:51 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

/* tab[0] = Numero de l'etage (de 1 a sas_height)
 * tab[1] = Hauteur de l'etage - 1 (traite premiere ligne apart)
 * tab[2] = Nombre d'etoile
 * tab[3] = Marge entre chaque etage 
 * tab[4] = TMP	*/	
int		ft_space_nb(int sas_height)
{
	int	tab[5];
	int space_nb;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 1;
	tab[3] = 4;
	while (tab[0] <= sas_height)
	{
		if (tab[0] != 1)
			tab[2] += tab[3];
		tab[4] = tab[1];
		while (tab[4] > 0)
		{
			tab[2] += 2;
			tab[4]--;
		}
		if (tab[0] % 2 == 1)
			tab[3] += 2;
		tab[0]++;
		tab[1]++;
	}
	space_nb = tab[2] / 2;
	return (space_nb);
}

void	ft_print_lign(int space_nb, int star_nb, int door_char_nb, int reg_line)
{
	int i;

	i = 0;
	while (i <= space_nb)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	i = 0;
	while (i < star_nb)
	{
		if ((i < (star_nb / 2 - door_char_nb / 2 )
			   || i > (star_nb / 2 + door_char_nb / 2))
		   	   || reg_line > 0)
		{
			ft_putchar('*');
			reg_line--;
		}
		else
			ft_putchar('|');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	ft_print_door(int space_nb, int floor_height, int star_nb)
{
	int door_char_nb;
	int	i;

	i = 5;
	door_char_nb = 1;
	while (floor_height >= i)
	{
		door_char_nb += 2;
		i += 2;
	}
	
	if (floor_height % 2 == 0)
		ft_print_lign(space_nb, star_nb, door_char_nb, 2);
	else
		ft_print_lign(space_nb, star_nb, door_char_nb, 1);
}

void	ft_print_sastantua(int space_nb, int sas_height)
{
	int tab[5];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 1;
	tab[3] = 4;
	while (tab[0] <= sas_height)
	{
		if (tab[0] != 1)
			tab[2] += tab[3];
		space_nb -= tab[3] / 2;
		tab[4] = tab[1];
		ft_print_lign(space_nb, tab[2], 0, 10000);
		while (tab[4] > 0)
		{
			tab[2] += 2;
			space_nb -= 1;
			tab[4]--;
			if (tab[0] == sas_height)
				ft_print_door(space_nb, tab[1], tab[2]);
			else
				ft_print_lign(space_nb, tab[2], 0, 10000);
		}
		if (tab[0] % 2 == 1)
			tab[3] += 2;
		tab[0]++;
		tab[1]++;
	}
}

int		main(void)
{
	ft_print_sastantua((ft_space_nb(1) + 1), 1);
	ft_print_sastantua((ft_space_nb(2) + 1), 2);
	ft_print_sastantua((ft_space_nb(3) + 1), 3);
	ft_print_sastantua((ft_space_nb(4) + 1), 4);
	ft_print_sastantua((ft_space_nb(5) + 1), 5);
	ft_print_sastantua((ft_space_nb(6) + 1), 6);
	return (0);
}
