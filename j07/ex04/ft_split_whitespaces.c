/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:20:15 by mgonon            #+#    #+#             */
/*   Updated: 2016/08/17 15:11:43 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

void	ft_get_word_nb(char *str, int i, int *word_nb, int *max_word_size)
{
	int	count_word_size;

	count_word_size = i;
	while (ft_is_space(str[i]) == 1)
	{
		count_word_size++;
		i++;
	}
	while (ft_is_space(str[i]) == 0 && str[i])
		i++;
	if (i - count_word_size > *max_word_size)
		*max_word_size = i - count_word_size;
	if ((i - count_word_size) > 0)
		*word_nb = *word_nb + 1;
	if (str[i] != '\0')
		ft_get_word_nb(str, i, word_nb, max_word_size);
}

char	**ft_feed_str(char *str, char **ret_str, int i, int j)
{
	int	k;

	k = 0;
	while (ft_is_space(str[i]) == 1)
		i++;
	while (ft_is_space(str[i]) == 0 && str[i])
	{
		ret_str[j][k] = str[i];
		i++;
		k++;
	}
	if (str[i] == '\0')
		if (ft_is_space(str[i - 1]) == 0)
			ret_str[++j] = 0;
		else
			ret_str[j] = 0;
	else
	{
		ret_str[j][k] = '\0';
		j++;
		ft_feed_str(str, ret_str, i, j);
	}
	return (ret_str);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		word_nb;
	int		max_word_size;
	char	**ret_str;

	i = 0;
	word_nb = 0;
	max_word_size = 0;
	ft_get_word_nb(str, 0, &word_nb, &max_word_size);
	ret_str = malloc(sizeof(*ret_str) * (word_nb + 1));
	while (i < word_nb)
	{
		ret_str[i] = malloc(sizeof(**ret_str) * (max_word_size));
		i++;
	}
	ret_str = ft_feed_str(str, ret_str, 0, 0);
	return (ret_str);
}

/*
**int		main(int argc, char **argv)
**{
**	int		i;
**	char	*tab;
**	char	**tab2;
**
**	tab = argv[1];
**	tab2 = ft_split_whitespaces(tab);
**	i = 0;
**	while (tab2[i])
**		printf("%s\n", tab2[i++]);
**}
*/
