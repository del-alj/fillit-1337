/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:07:08 by del-alj           #+#    #+#             */
/*   Updated: 2019/06/12 16:35:57 by ael-makk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	void	ft_change_char(char **tetri, int position)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tetri[i][j] == '#')
				tetri[i][j] = 'A' + position;
			j++;
		}
		i++;
	}
}

char			***ft_validation(char *file_name, int len)
{
	int			fd;
	char		***list;
	int			i;

	fd = open(file_name, O_RDONLY);
	if (!(list = (char***)malloc(sizeof(char**) * (len + 1))))
		return (0);
	i = 0;
	while (i < len)
	{
		if (!(list[i] = ft_tetri(fd)))
		{
			ft_putendl("error");
			ft_del_list_tetri(list);
			list = NULL;
			return (0);
		}
		ft_deplace_tetri(list[i]);
		ft_change_char(list[i], i);
		i++;
	}
	list[len] = 0;
	return (list);
}
