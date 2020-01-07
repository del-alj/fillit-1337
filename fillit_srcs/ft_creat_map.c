/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-makk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 01:51:42 by ael-makk          #+#    #+#             */
/*   Updated: 2019/06/01 21:25:32 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_creat_map(int len)
{
	char	**map;
	int		i;

	if (!(map = (char**)malloc((len + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		map[i] = ft_memalloc(len + 1);
		ft_memset(map[i], '.', len);
		i++;
	}
	map[i] = 0;
	return (map);
}
