/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 16:59:13 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/21 18:36:44 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_feed_first_last04(int x, int first)
{
	int		i;
	char	*str;

	str = malloc(sizeof(*str) * (x + 1));
	i = 0;
	if (first == 1)
		str[i++] = 'A';
	else
		str[i++] = 'C';
	while (i <= x - 2)
		str[i++] = 'B';
	if (x > 1)
	{
		if (first == 1)
			str[i++] = 'C';
		else
			str[i++] = 'A';
	}
	str[i++] = '\n';
	str[i] = '\0';
	return (str);
}

char	*ft_feed_regular_line04(int x)
{
	int		i;
	char	*str;

	str = malloc(sizeof(*str) * (x + 1));
	i = 0;
	str[i++] = 'B';
	while (i <= x - 2)
		str[i++] = ' ';
	if (x > 1)
	{
		str[i++] = 'B';
		str[i++] = '\n';
	}
	else if (i == x)
		str[i++] = '\n';
	str[i] = '\0';
	return (str);
}

char	*colle_04(int x, int y)
{
	int		i;
	char	*str;

	str = (char *)malloc(sizeof(*str) * (x * y + 1));
	i = 1;
	while (i <= y && x > 0)
	{
		if (i == 1 || i == y)
			str = ft_strcat(str, ft_feed_first_last04(x, i));
		else
			str = ft_strcat(str, ft_feed_regular_line04(x));
		i++;
	}
	return (str);
}
