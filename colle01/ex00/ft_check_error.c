/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 00:10:21 by jgraille          #+#    #+#             */
/*   Updated: 2016/08/14 10:41:32 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_number(char *ligne)
{
	int	i;

	i = 0;
	while (ligne[i])
	{
		if ((ligne[i] >= '1' && ligne[i] <= '9') || ligne[i] == '.')
		{
			i++;
			continue;
		}
		else
			return (1);
	}
	return (0);
}

int	check_double(char *ligne)
{
	int i;
	int i2;
	int count;

	i = 1;
	i2 = 0;
	count = 0;
	while (i <= 9)
	{
		while (ligne[i2])
		{
			if (ligne[i2] == i + '0')
				count++;
			i2++;
		}
		i2 = 0;
		if (count > 1)
			return (1);
		i++;
		count = 0;
	}
	return (0);
}

int	ft_check_error(int argc, char **argv)
{
	int		error;
	int		i;
	int		i2;
	char	*ligne;

	i = 0;
	i2 = 0;
	error = 0;
	if (argc != 10)
		error += 1;
	while (i < argc - 1)
	{
		ligne = argv[i + 1];
		while (ligne[i2])
			i2++;
		error += check_number(ligne);
		error += check_double(ligne);
		if (i2 != 9)
			error += 1;
		i2 = 0;
		i++;
	}
	return (error);
}
