/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 15:50:47 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/21 23:36:30 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_calculate_size(char *str, int *height, int *width)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (count < 1)
			*width += 1;
		if (str[i] == '\n')
		{
			*height += 1;
			count++;
		}
		i++;
	}
}

char	*ft_strdup(char *dest, char *src, char to_copy, int size)
{
	int	i;

	i = 0;
	dest = malloc(sizeof(*dest) * size + 1);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = to_copy;
	dest[i] = '\0';
	return (dest);
}

char	*read_input(int ret, int i)
{
	char	*input_str;
	char	*tmp;
	char	buf[2];

	input_str = (char *)malloc(sizeof(*input_str));
	if ((ret = read(0, buf, 1)) == -1)
		return (0);
	while ((ret = read(0, buf, 1)))
	{
		buf[ret] = '\0';
		tmp = (char *)malloc(sizeof(*tmp) * (1 + i));
		tmp = input_str;
		input_str = ft_strdup(input_str, tmp, buf[0], (1 + i));
		i++;
	}
	input_str[i] = '\0';
	return (input_str);
}

int		main(void)
{
	int		height;
	int		width;
	char	*input;

	height = 0;
	width = -1;
	input = read_input(1, 0);
	if (input == 0)
		return (0);
	ft_calculate_size(input, &height, &width);
	ft_print(input, width, height);
	return (0);
}
