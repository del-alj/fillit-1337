/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 00:20:32 by del-alj           #+#    #+#             */
/*   Updated: 2019/06/01 21:30:04 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/libft.h"
# include "../libft/get_next_line.h"

void	ft_del_tetri(char **tab);
char	**ft_tetri(int fd);
int		ft_verification(char **tab);
int		cont_tetri(int fd);
void	ft_del_list_tetri(char ***list);
void	ft_deplace_tetri(char **list);
char	***ft_validation(char *file_name, int	len);
int		ft_size_map(int ntetri);
char	**ft_creat_map(int len);
int		ft_rempli_map(char **map, char **tetri, int i, int j);
int		ft_cheek_place(char **map, char **tetri, int i, int j);
int		*ft_find_place(char **map, char **tetri, int i, int j);
int		ft_backtrack(char ***list, char **map, int	i, int	j);
void	del_last_tetri(char **list, char **map);
#endif
