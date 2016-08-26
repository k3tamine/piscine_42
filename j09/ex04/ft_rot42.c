/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 00:30:52 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/12 04:34:54 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_lowcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int		ft_is_upcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_lowcase(str[i]) == 1)
		{
			if (str[i] + 16 <= 'z')
				str[i] = str[i] + 16;
			else
				str[i] = str[i] - 10;
		}
		else if (ft_is_upcase(str[i]) == 1)
		{
			if (str[i] + 16 <= 'Z')
				str[i] = str[i] + 16;
			else
				str[i] = str[i] - 10;
		}
		i++;
	}
	return (str);
}
