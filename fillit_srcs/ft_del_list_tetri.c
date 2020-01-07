/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_list_tetri.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 21:32:42 by del-alj           #+#    #+#             */
/*   Updated: 2019/06/01 21:25:50 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_del_list_tetri(char ***list)
{
	int i;

	i = 0;
	if (list)
	{
		while (list[i])
		{
			ft_del_tetri(list[i]);
			list[i] = NULL;
			i++;
		}
		if (list)
		{
			free(list);
			list = NULL;
		}
	}
}
