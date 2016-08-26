/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 04:38:51 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/12 04:47:37 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_bouton(int i, int j, int k)
{

	if (i > j)
	{
		if (j > k)
			return j;
		else if (k > i)
			return i;
		else
			return k;
	}
	else
	{
		if (i > k)
			return k;
		else if (k > j)
			return j;
		else
			return i;
	}
}
