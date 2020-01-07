/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 01:27:56 by del-alj           #+#    #+#             */
/*   Updated: 2019/06/01 21:28:04 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_tetri(int fd)
{
	int		line;
	char	**tetri;
	char	*ln;

	line = 0;
	if (!(tetri = (char **)malloc(sizeof(char *) * 5)))
		return (NULL);
	while (line < 4)
	{
		tetri[line] = 0;
		get_next_line(fd, &(tetri[line]));
		if (ft_strlen(tetri[line]) != 4)
		{
			ft_strdel(tetri);
			return (NULL);
		}
		line++;
	}
	tetri[line] = 0;
	if (get_next_line(fd, &ln) > 0)
		ft_strdel(&ln);
	return ((!(ft_verification(tetri))) ? NULL : tetri);
}
