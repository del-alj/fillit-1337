/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deplace_tetri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 22:41:17 by del-alj           #+#    #+#             */
/*   Updated: 2019/06/01 21:26:41 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	void	ft_up_tetri(char **tetri)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (tetri)
	{
		while (!(ft_strchr(tetri[i], '#')))
			i++;
		if (i > 0)
		{
			while (i < 4)
			{
				ft_strcpy(tetri[j], tetri[i]);
				i++;
				j++;
			}
			while (j < 4)
			{
				ft_memset(tetri[j], '.', 4);
				j++;
			}
		}
		return ;
	}
}

static int		ft_cmp_lin(char **tetri)
{
	int i;
	int	nb;
	int	m_nb;

	m_nb = 0;
	if (tetri)
	{
		i = 0;
		while (tetri[i])
		{
			nb = ft_strlen(tetri[i]) - ft_strlen(ft_strchr(tetri[i], '#'));
			if (nb == 0)
				return (nb);
			if (nb >= 0 && m_nb == 0)
				m_nb = nb;
			if (m_nb > nb)
				m_nb = nb;
			i++;
		}
	}
	return (m_nb);
}

static	void	ft_left_tetri(char **tetri)
{
	int			i;
	int			j;
	int			colon;

	i = 0;
	j = 0;
	colon = 0;
	if (tetri[i][j] != '#')
	{
		colon = ft_cmp_lin(tetri);
		if (colon > 0)
		{
			while (tetri[i])
			{
				ft_strcpy(tetri[i], tetri[i] + colon);
				while (ft_strlen(tetri[i]) < 4)
					ft_strcat(tetri[i], ".");
				i++;
			}
		}
	}
}

void			ft_deplace_tetri(char **tetri)
{
	ft_left_tetri(tetri);
	ft_up_tetri(tetri);
}
