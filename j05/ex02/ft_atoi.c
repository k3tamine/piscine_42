/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 03:23:05 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/09 20:48:29 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnumber(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

int	ft_sign(char c)
{
	if (c == '-')
		return (-1);
	else if (c == '+')
		return (42);
	else if (ft_isnumber(c) == 1)
		return (c - '0');
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int res;

	res = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	sign = ft_sign(str[i]);
	if (sign == 0)
		return (0);
	else if (sign == 42 || sign == -1)
		i++;
	while (ft_isnumber(str[i]) == 1)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (sign == -1)
		return (res * sign);
	else
		return (res);
}
