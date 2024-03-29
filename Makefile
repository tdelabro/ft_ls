# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdelabro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/03 23:15:58 by tdelabro          #+#    #+#              #
#    Updated: 2019/06/17 19:23:21 by tdelabro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls
CC = gcc
CFLAGS = -Wall -Wextra 

# sources
SRC_NAME = manage_lists.c timesort.c colors.c acl.c xattr_acl.c t_dir.c ldisplay.c display.c main.c list_and_rec.c order_dirs.c
SRC_DIR = src/
SRC = $(addprefix $(SRC_DIR), $(SRC_NAME))

#libraries
LIB_NAME = libft.a
LIB_DIR = libft/
LIB = $(addprefix $(LIB_DIR), $(LIB_NAME))

#objects
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ_DIR = obj/
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_NAME))

#includes
INC_NAME = ft_ls.h
INC_DIR = inc/
INC = $(addprefix $(INC_DIR), $(INC_NAME))

CPPFLAGS = -I$(INC_DIR) -I$(LIB_DIR)$(INC_DIR)

all : $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c $(LIB) $(INC)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

$(NAME) : $(OBJ_DIR) $(OBJ) $(LIB)
	$(CC) $(OBJ) $(LIB) -o $@

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

$(LIB) :
	make -C $(LIB_DIR)

clean :
	make clean -C $(LIB_DIR)
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
