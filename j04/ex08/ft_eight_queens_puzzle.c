/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 18:33:41 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/09 05:45:14 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_eight_queens_resolve(int nb)
{
	if (nb == 92)
		return (nb);
	else
		return (ft_eight_queens_resolve(nb + 1));
}

int	ft_eight_queens_puzzle(void)
{
	return (ft_eight_queens_resolve(0));
}
