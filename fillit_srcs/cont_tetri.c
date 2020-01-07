/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cont_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:06:01 by del-alj           #+#    #+#             */
/*   Updated: 2019/06/12 18:26:37 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int	check_newlines(char *tetrimino)
{
	int		i;

	i = 4;
	while (i < 21 && tetrimino[i] == '\n')
		i = i + 5;
	return (i == 24 && (tetrimino[20] == '\0' || tetrimino[19] == '\n'));
}

int			cont_tetri(int fd)
{
	char	tetri[22];
	int		nbr_tetriminos;
	int		ret;

	nbr_tetriminos = 0;
	ret = 21;
	while (ret == 21 && (ret = read(fd, tetri, 21)) > 0 && ret > 19)
	{
		tetri[ret] = '\0';
		if (check_newlines(tetri) == 0)
			return (0);
		nbr_tetriminos++;
		if (nbr_tetriminos > 26)
			return (0);
	}
	return (ret == 20 ? nbr_tetriminos : 0);
}
