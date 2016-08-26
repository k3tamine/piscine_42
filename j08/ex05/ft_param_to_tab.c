/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 13:57:13 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/17 17:25:33 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int		size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

char					*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char					*ft_strdup(char *src)
{
	char	*ret_str;
	int		size;

	size = 0;
	while (src[size])
		size++;
	ret_str = (char *)malloc(sizeof(*ret_str) * size);
	if (ret_str == NULL)
		return (NULL);
	size = 0;
	while (src[size])
	{
		ret_str[size] = src[size];
		size++;
	}
	ret_str[size] = '\0';
	return (ret_str);
}

struct	s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int			i;
	int			size_param;
	t_stock_par	*a;

	i = 0;
	a = malloc(sizeof(*a) * (ac + 1));
	while (i < ac)
	{
		size_param = ft_strlen(av[i]);
		a[i].size_param = size_param;
		a[i].str = av[i];
		a[i].copy = ft_strdup(av[i]);
		a[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	a[i].str = 0;
	return (a);
}
