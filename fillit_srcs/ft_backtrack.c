/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:30:38 by del-alj           #+#    #+#             */
/*   Updated: 2019/06/12 18:03:54 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	void	print_mp(char **map)
{
	int			b;

	b = -1;
	while (map[++b])
	{
		ft_putendl(map[b]);
	}
}

static	void	ft_print_exit(char ***list, char **map, int l)
{
	if (list[l + 1] == 0)
	{
		print_mp(map);
		ft_del_tetri(map);
		map = NULL;
		exit(0);
	}
}

int				ft_backtrack(char ***list, char **map, int i, int j)
{
	int			size;
	int			*units;

	size = ft_strlen(map[i]);
	while (i < size)
	{
		if ((units = ft_find_place(map, list[0], i, j)))
		{
			i = units[0];
			j = units[1];
			ft_print_exit(list, map, 0);
			ft_backtrack(list + 1, map, 0, 0);
			del_last_tetri(*list, map);
			if ((j == size - 1) && !(j = 0))
				i++;
			else
				j++;
			free(units);
			units = 0;
		}
		else
			return (0);
	}
	return ((i >= size && j >= size) ? -1 : 0);
}
