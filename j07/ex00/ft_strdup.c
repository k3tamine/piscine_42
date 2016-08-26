/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 05:35:52 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/16 18:56:11 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ret_str;
	int		size;

	size = 0;
	while (src[size])
		size++;
	ret_str = (char*)malloc(sizeof(*ret_str) * size);
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
