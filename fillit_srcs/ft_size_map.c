/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:06:09 by del-alj           #+#    #+#             */
/*   Updated: 2019/06/01 21:27:45 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_size_map(int ntetri)
{
	int nhash;
	int	col;

	col = 2;
	nhash = (4 * ntetri);
	while (col * col < nhash)
		col++;
	return (col);
}
