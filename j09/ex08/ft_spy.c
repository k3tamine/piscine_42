/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 02:12:05 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/12 03:52:19 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strfind(char *str, char *to_find)
{
	int	i;
	int j;
	int size;

	i = 0;
	j = 0;
	size = 0;
	while (to_find[size] != '\0')
		size++;
	if (size == 0)
		return (0);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j])
		{
			if (j == size - 1)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

void	print_alert(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}


char	*ft_strdelfirstspaces(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == 32)
			i++;
		else
		{
			str[j] = str[i];
			str[i] = 32;
			i++;
			j++;
		}
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char *tab_alert[3];

	tab_alert[0] = "powers";
	tab_alert[1] = "attack";
	tab_alert[2] = "president";
	i = 1;
	j = 0;
	while (i < argc)
	{
		printf("\nargv = %s", argv[i]);
		ft_strdelfirstspaces(argv[i]);
		//ft_strlowcase(argv[i]);
		printf("\nargv = %s", argv[i]);
		while (argv[i][j] == tab_alert[i][j])
				j++;
		if (tab_alert[i][j] == '\0')
		{
			write (1, "Alert!!!", 9);
			return (1);
		}
		i++;
	}
	write(1, "toto", 5);
	return (0);
}
