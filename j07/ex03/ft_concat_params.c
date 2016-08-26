/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 09:22:26 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/17 15:42:21 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_calculate_size(int argc, char **argv)
{
	int	i;
	int	j;
	int	size;

	i = 1;
	j = 0;
	size = 0;
	while (i < argc)
	{
		while (argv[i])
		{
			while (argv[i][j])
			{
				size++;
				j++;
			}
			j = 0;
			size++;
			i++;
		}
	}
	return (size);
}

char	*ft_feed_array(int argc, char **argv, char *str, int i)
{
	int	k;
	int	j;

	k = 0;
	while (i < argc)
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				str[k] = argv[i][j];
				j++;
				k++;
			}
			if (i < argc - 1)
			{
				str[k] = '\n';
				k++;
			}
			i++;
		}
	}
	str[k] = '\0';
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	char	*str;

	size = ft_calculate_size(argc, argv);
	str = (char *)malloc(sizeof(*str) * (size + 1));
	str = ft_feed_array(argc, argv, str, 1);
	return (str);
}
