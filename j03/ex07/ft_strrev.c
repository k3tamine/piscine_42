/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 18:16:36 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/05 15:20:37 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	int	lenght_str;
	int	tmp;

	lenght_str = 0;
	while (str[lenght_str] != '\0')
	{
		lenght_str++;
	}
	i = 0;
	j = lenght_str - 1;
	lenght_str /= 2;
	while (i < lenght_str)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j--;
		i++;
	}
	return (str);
}
