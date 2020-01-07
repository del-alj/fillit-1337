/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_tetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 11:57:16 by del-alj           #+#    #+#             */
/*   Updated: 2019/06/01 21:26:20 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_del_tetri(char **tab)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(*tab);
	if (tab)
	{
		while (i < size)
		{
			free(tab[i]);
			tab[i] = NULL;
			i++;
		}
		if (tab)
		{
			free(tab);
			tab = NULL;
		}
	}
}
