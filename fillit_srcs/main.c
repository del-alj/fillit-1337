/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-makk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 19:00:33 by ael-makk          #+#    #+#             */
/*   Updated: 2019/06/12 19:00:41 by ael-makk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	void	ft_backtrack_help(char ***list, int len)
{
	char		**map;

	map = NULL;
	len = ft_size_map(len);
	map = ft_creat_map(len);
	while (!(ft_backtrack(list, map, 0, 0)))
	{
		ft_del_tetri(map);
		map = ft_creat_map(++len);
	}
}

int				main(int argc, char **argv)
{
	char		***list;
	int			fd;
	int			l;
	int			len;

	l = 0;
	if (argc != 2)
		ft_putendl("usage : [program name] [input file]");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (!(len = cont_tetri(fd)))
		{
			ft_putendl("error");
			return (0);
		}
		close(fd);
		if (!(list = ft_validation(argv[1], len)))
			return (0);
		ft_backtrack_help(list, len);
	}
	return (0);
}
