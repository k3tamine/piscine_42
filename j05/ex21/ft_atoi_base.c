/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 11:13:26 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/25 13:27:08 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_error_handler(char *str, char *base)
{
	int	i;
	int	j;
	int	find;
	int	count;

	i = 0;
	if (!str || !base || !base[1])
		return (1);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			i++;
		j = 0;
		find = 0;
		count = 0;
		while (base[j])
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-')
				count++;
			if (str[i] == base[j] || str[i] == '+' || str[i] == '-')
				find++;
			j++;
		}
		//printf("count = %d, find = %d\n", count, find);
		if (count > 1 || find < 1)
			return (2);
		i++;
	}
	return (0);
}

int	ft_base_size(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	printf("%d", ft_error_handler(str, base));
	int	i;
	int	sign;
	int	size_base;
	int	res;

	i = 0;
	sign = 0;

	size_base = ft_base_size(base) - 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			 || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= base[0] && str[i] <= size_base)
	{
		res *= size_base;
		res += str[i] - '0';
		i++;
	}
	if (sign == -1)
		return (-res);
	else
		return (res);
}

int	main(int argc, char **argv)
{
	ft_atoi_base(argv[1], argv[2]);
}
