/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_place.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 00:19:31 by del-alj           #+#    #+#             */
/*   Updated: 2019/06/01 21:26:58 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_find_place(char **map, char **tetri, int i, int j)
{
	int	size;
	int	*units;

	units = NULL;
	size = ft_strlen(map[i]);
	while (i < size && j < size)
	{
		if (ft_cheek_place(map, tetri, i, j))
		{
			ft_rempli_map(map, tetri, i, j);
			units = (int*)malloc(2 * sizeof(int));
			units[0] = i;
			units[1] = j;
			return (units);
		}
		j++;
		if (j == size && i < size)
		{
			i++;
			j = 0;
		}
		if (i == size)
			break ;
	}
	return (0);
}
