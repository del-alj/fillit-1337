/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verification.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 01:23:07 by del-alj           #+#    #+#             */
/*   Updated: 2019/06/01 21:28:40 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_compchar(char a, char b)
{
	if (a == b)
		return (1);
	return (0);
}

static	int	ft_nbr_liaison(char **str, int i, int j, int cmp)
{
	if (str[i][j] == '#')
	{
		if ((j >= 0) && (j < 3) && (cmp < 6))
			cmp = ft_compchar(str[i][j], str[i][j + 1]) + cmp;
		if ((j > 0) && (j <= 3) && (cmp < 6))
			cmp = ft_compchar(str[i][j - 1], str[i][j]) + cmp;
		if ((i >= 0) && (i < 3) && (cmp < 6))
			cmp = ft_compchar(str[i][j], str[i + 1][j]) + cmp;
		if ((i > 0) && (i <= 3) && (cmp < 6))
			cmp = ft_compchar(str[i - 1][j], str[i][j]) + cmp;
	}
	return (cmp);
}

static int	ft_verif_hash_tetri(char **str)
{
	int		i;
	int		j;
	int		cmp;

	i = 0;
	cmp = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			cmp = ft_nbr_liaison(str, i, j, cmp);
			j++;
		}
		i++;
	}
	if (cmp >= 6)
		return (cmp);
	return (0);
}

static int	ft_contchar(char *str, char c)
{
	int		i;
	int		indx;

	i = 0;
	indx = 0;
	while (str[i])
	{
		if (str[i] == c)
			indx++;
		i++;
	}
	return (indx);
}

int			ft_verification(char **tab)
{
	int		n_point;
	int		n_hash;
	int		i;

	n_point = 0;
	n_hash = 0;
	i = 0;
	while (tab[i])
	{
		n_hash = n_hash + ft_contchar(tab[i], '#');
		n_point = n_point + ft_contchar(tab[i], '.');
		i++;
	}
	if (n_point == 12 && n_hash == 4)
	{
		if (ft_verif_hash_tetri(tab))
		{
			return (1);
		}
	}
	ft_del_tetri(tab);
	return (0);
}
