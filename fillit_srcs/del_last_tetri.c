/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_last_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 03:11:40 by del-alj           #+#    #+#             */
/*   Updated: 2019/06/01 21:24:50 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_del_alpha(char **map, char c)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	size = ft_strlen(map[i]);
	while (map[i] && map[i][j])
	{
		if (map[i][j] == c)
			map[i][j] = '.';
		j++;
		if (j == size)
		{
			i++;
			j = 0;
		}
	}
}

void		del_last_tetri(char **list, char **map)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	c = '\0';
	while (list[i][j])
	{
		if (ft_isalpha(list[i][j]))
		{
			c = list[i][j];
			break ;
		}
		j++;
	}
	ft_del_alpha(map, c);
}
