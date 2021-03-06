/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 06:17:34 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/10 00:28:22 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && (unsigned int)i < n)
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return ((s1[i] - '0') - (s2[i] - '0'));
}
