/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rempli_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 21:35:45 by del-alj           #+#    #+#             */
/*   Updated: 2019/06/01 21:27:14 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_rempli_map(char **map, char **tetri, int i, int j)
{
	int	t;
	int	r;
	int hash;

	t = 0;
	hash = 1;
	while (map[i][j])
	{
		r = 0;
		while (map[i][j] && tetri[t][r] && ((map[i][j] == '.' &&
		(tetri[t][r] == '.' || ft_isalpha(tetri[t][r]))) ||
		(ft_isalpha(map[i][j]) && (tetri[t][r] == '.'))))
		{
			if (map[i][j] == '.' && ft_isalpha(tetri[t][r]) && (++hash))
				map[i][j] = tetri[t][r];
			if (hash == 5)
				return (1);
			j++;
			r++;
		}
		j = j - r;
		i++;
		t++;
	}
	return (0);
}
