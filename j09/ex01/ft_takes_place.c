/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 22:05:10 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/11 23:05:42 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_hour(int start_hour, int end_hour, char start_ap, char end_ap)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d %c.M AND %d %c.M.\n", start_hour, start_ap, end_hour, end_ap);
}

void	ft_takes_place(int hour)
{
	if (hour > 12 && hour < 23)
		print_hour(hour - 12, hour - 11, 'P', 'P');
	else if (hour < 11 && hour > 0)
		print_hour(hour, hour + 1, 'A', 'A');
	else if (hour == 0)
		print_hour(hour + 12, hour + 1, 'A', 'A');
	else if (hour == 12)
		print_hour(hour, hour - 11, 'P', 'P');
	else if (hour == 23)
		print_hour(hour - 12, hour - 11, 'P', 'A');
	else if (hour == 11)
		print_hour(hour, hour + 1, 'A', 'P');
	else if (hour == 24)
		print_hour(hour - 12, hour - 23, 'A', 'A');
}
