/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cheek_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 10:31:08 by del-alj           #+#    #+#             */
/*   Updated: 2019/06/12 17:08:04 by ael-makk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	char	find_sombol(char *str)
{
	int			i;
	char		c;

	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]))
		{
			c = str[i];
			return (c);
		}
		i++;
	}
	return (0);
}

int				ft_cheek_place(char **map, char **tetri, int i, int j)
{
	int			t;
	int			r;
	int			hash;
	char		symbol;

	t = 0;
	hash = 1;
	symbol = find_sombol(tetri[t]);
	while (!(r = 0) && map && tetri && map[i] && map[i][j] && tetri[t][r] &&
	(((map[i][j] == '.' && tetri[t][r] == '.') || (map[i][j] == '.' &&
	ft_isalpha(tetri[t][r]))) || (ft_isalpha(map[i][j]) && tetri[t][r] == '.')))
	{
		while (map[i] && map[i][j] && tetri[t][r] && (((map[i][j] == '.' &&
	tetri[t][r] == '.') || (map[i][j] == '.' && ft_isalpha(tetri[t][r])))
	|| (ft_isalpha(map[i][j]) && tetri[t][r] == '.')))
		{
			if ((map[i][j++] == '.' && ft_isalpha(tetri[t][r])) ? ++r : !(++r))
				if (++hash && hash == 5)
					return (1);
		}
		j = j - r;
		if (ft_strchr(tetri[t] + r, symbol) || !(++t) || !(++i))
			break ;
	}
	return (0);
}
