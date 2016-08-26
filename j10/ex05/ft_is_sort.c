/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 13:15:22 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/24 05:27:28 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	asc = 0;
	desc = 0;
	i = 0;
	if (length < 2)
		return (1);
	else
	{
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				asc++;
			if (f(tab[i], tab[i + 1]) < 0)
				desc++;
			i++;
		}
		if (desc > 0 && asc > 0)
			return (0);
		else
			return (1);
	}
}
