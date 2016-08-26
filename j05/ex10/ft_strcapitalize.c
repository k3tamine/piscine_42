/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 06:53:28 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/11 03:57:12 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_cap_letter(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

int		ft_is_low_letter(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	new_word = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == 32 || str[i] == 43 || str[i] == 45)
		{
			new_word = 1;
			i++;
		}
		if (new_word == 1 && ft_is_low_letter(str[i]) == 1)
			str[i] = str[i] - 32;
		else if (new_word == 0 && ft_is_cap_letter(str[i]) == 1)
			str[i] += 32;
		new_word = 0;
		i++;
	}
	return (str);
}
