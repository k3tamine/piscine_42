/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 15:54:59 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/06 03:28:00 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_number(char c)
{
	int	is_number;

	is_number = 0;
	if ((c >= '0') && (c <= '9'))
	{
		is_number = 1;
	}
	else
	{
		is_number = 0;
	}
	return (is_number);
}

int	ft_first_two(char *str, int *atoi_i)
{
	int	i;

	i = 0;
	if (str[i] == '-')
	{
		i++;
		if (ft_is_number(str[i]) == 1)
		{
			i = -1 * (str[i] - '0');
			*atoi_i = 2;
			return (i);
		}
		else
			return (-10);
	}
	else if (str[i] == '+')
	{
		*atoi_i = 1;
		return (0);
	}
	else if (ft_is_number(str[i]))
		return (0);
	else
		return (-10);
}

int	ft_atoi(char *str)
{
	int	i;
	int nb;
	int	*ptr_i;

	i = 0;
	ptr_i = &i;
	nb = 1;
	nb = ft_first_two(str, ptr_i);
	if (nb != -10)
	{
		while (str[i] != '\0' && ft_is_number(str[i]) == 1)
		{
			nb *= 10;
			if (nb >= 0)
				nb += str[i] - '0';
			else
				nb -= str[i] - '0';
			i++;
		}
		return (nb);
	}
	else
		return (0);
}
