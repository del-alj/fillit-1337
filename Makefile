# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: del-alj <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/10 15:41:31 by del-alj           #+#    #+#              #
#    Updated: 2019/06/01 05:46:54 by del-alj          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	fillit_srcs/ft_tetri.c\
		fillit_srcs/ft_verification.c\
		fillit_srcs/ft_del_tetri.c\
		fillit_srcs/cont_tetri.c\
		fillit_srcs/ft_del_list_tetri.c\
		fillit_srcs/ft_deplace_tetri.c\
		fillit_srcs/ft_validation.c\
		fillit_srcs/ft_size_map.c\
		fillit_srcs/ft_rempli_map.c\
		fillit_srcs/ft_cheek_place.c\
		fillit_srcs/ft_find_place.c\
		fillit_srcs/ft_backtrack.c\
		fillit_srcs/ft_creat_map.c\
		fillit_srcs/del_last_tetri.c\
		fillit_srcs/main.c\

SRC_LIBFT = libft/ft_atoi.c\
	  		libft/ft_bzero.c\
	  		libft/ft_isalnum.c\
	  		libft/ft_isalpha.c\
	  		libft/ft_isascii.c\
	  		libft/ft_isdigit.c\
	  		libft/ft_isprint.c\
	  		libft/ft_itoa.c\
	  		libft/ft_memalloc.c\
	  		libft/ft_memccpy.c\
	  		libft/ft_memchr.c\
	  		libft/ft_memcmp.c\
	  		libft/ft_memcpy.c\
	  		libft/ft_memdel.c\
	  		libft/ft_memmove.c\
	  		libft/ft_memset.c\
	  		libft/ft_putchar.c\
	  		libft/ft_putstr.c\
	  		libft/ft_putendl.c\
	  		libft/ft_putendl_fd.c\
	  		libft/ft_putchar_fd.c\
	  		libft/ft_putnbr.c\
	  		libft/ft_putnbr_fd.c\
	  		libft/ft_putstr_fd.c\
	  		libft/ft_strcat.c\
	  		libft/ft_strchr.c\
	  		libft/ft_strcmp.c\
	  		libft/ft_strclr.c\
	  		libft/ft_strcpy.c\
	  		libft/ft_strequ.c\
	  		libft/ft_strnequ.c\
	  		libft/ft_strdel.c\
	  		libft/ft_strdup.c\
	  		libft/ft_striter.c\
	  		libft/ft_striteri.c\
	  		libft/ft_strjoin.c\
	  		libft/ft_strlcat.c\
	  		libft/ft_strlen.c\
	  		libft/ft_strmap.c\
	  		libft/ft_strmapi.c\
	  		libft/ft_strncat.c\
	  		libft/ft_strnew.c\
	  		libft/ft_strncmp.c\
	  		libft/ft_strncpy.c\
	  		libft/ft_strnstr.c\
	  		libft/ft_strrchr.c\
	  		libft/ft_strstr.c\
	  		libft/ft_strsub.c\
	  		libft/ft_strsplit.c\
	  		libft/ft_strtrim.c\
	  		libft/ft_tolower.c\
	  		libft/ft_toupper.c\
	  		libft/ft_lstnew.c\
	  		libft/ft_lstdelone.c\
	  		libft/ft_lstdel.c\
	  		libft/ft_lstadd.c\
	  		libft/ft_lstiter.c\
	  		libft/ft_lstmap.c\
	  		libft/ft_ramstr.c\
	  		libft/ft_lstadd_next.c\
	  		libft/ft_strndup.c\
	  		libft/ft_swapchar.c\
	  		libft/ft_print.c\
	  		libft/ft_lenlist.c\
	  		libft/ft_lst_del_node.c\
	  		libft/get_next_line.c\

NAME = fillit
NAME_LIBFT = libft/libft.a

OBJ = ft_tetri.o\
	  ft_verification.o\
	  ft_del_tetri.o\
	  cont_tetri.o\
	  ft_del_list_tetri.o\
	  ft_deplace_tetri.o\
	  ft_validation.o\
	  ft_size_map.o\
	  ft_rempli_map.o\
	  ft_cheek_place.o\
	  ft_find_place.o\
	  ft_backtrack.o\
	  ft_creat_map.o\
	  del_last_tetri.o\
	  main.o\

OBJ_LIBFT = ft_atoi.o\
			ft_bzero.o\
			ft_isalnum.o\
			ft_isalpha.o\
			ft_isascii.o\
			ft_isdigit.o\
			ft_isprint.o\
			ft_itoa.o\
			ft_memalloc.o\
			ft_memccpy.o\
			ft_memchr.o\
			ft_memcmp.o\
			ft_memcpy.o\
			ft_memdel.o\
			ft_memmove.o\
			ft_memset.o\
			ft_putchar.o\
			ft_putendl.o\
			ft_putendl_fd.o\
			ft_putnbr.o\
			ft_putnbr_fd.o\
			ft_putstr.o\
			ft_putchar_fd.o\
			ft_putstr_fd.o\
			ft_strcat.o\
			ft_strchr.o\
			ft_strcmp.o\
			ft_strcpy.o\
			ft_strclr.o\
			ft_strequ.o\
			ft_strnequ.o\
			ft_strdel.o\
			ft_strdup.o\
			ft_striter.o\
			ft_striteri.o\
			ft_strjoin.o\
			ft_strlcat.o\
			ft_strlen.o\
			ft_strncat.o\
			ft_strnew.o\
			ft_strmap.o\
			ft_strmapi.o\
			ft_strncmp.o\
			ft_strncpy.o\
			ft_strnstr.o\
			ft_strrchr.o\
			ft_strstr.o\
			ft_strsub.o\
			ft_strsplit.o\
			ft_strtrim.o\
			ft_tolower.o\
			ft_toupper.o\
			ft_lstnew.o\
			ft_lstdelone.o\
			ft_lstdel.o\
			ft_lstadd.o\
			ft_lstiter.o\
			ft_lstmap.o\
			ft_ramstr.o\
			ft_lstadd_next.o\
			ft_strndup.o\
			ft_swapchar.o\
			ft_print.o\
			ft_lenlist.o\
			ft_lst_del_node.o\
			get_next_line.o\

all : $(NAME)

$(NAME) :
	@gcc -c -Wall -Werror -Wextra -IH $(SRC_LIBFT)
	@ar rc $(NAME_LIBFT) $(OBJ_LIBFT)
	@rm -f $(OBJ_LIBFT)
	@gcc -c -Wall -Werror -Wextra -I fillit_srcs/ $(SRC)
	@gcc -o $(NAME) $(OBJ) $(NAME_LIBFT)
	
clean :
	@rm -rf $(OBJ)
fclean : clean
	@rm -f $(NAME)
	@rm -f $(NAME_LIBFT)
re : fclean all
