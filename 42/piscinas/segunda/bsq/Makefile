# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/06 16:54:00 by gbaruls-          #+#    #+#              #
#    Updated: 2024/04/10 17:49:24 by gbaruls-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bsq
LIBS		= bsq.h

SRC_DIR		=	src/
OBJ_DIR		=	obj/

SRCS_FILES	=	src/cubes src/ft_init src/ft_split src/ft_utils src/main src/printcube

SRCS 		= src/cubes.c src/ft_init.c src/ft_split.c src/ft_utils.c src/main.c src/printcube.c
OBJS		= obj/cubes.o obj/ft_init.o obj/ft_split.o obj/ft_utils.o obj/main.o obj/printcube.o
SRCDIRS		= $(shell find src/ -type d)
OBJSDIRS	= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(SRCDIRS))

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RANLIB		= ranlib
RM			= rm -rf
MKDIR		= mkdir -p

all:		$(NAME)

$(NAME):	$(OBJSDIRS) $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(LIBS) Makefile
			$(CC) $(CFLAGS) -c $< -o $@

$(OBJSDIRS) :
	$(MKDIR) $(OBJSDIRS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(OBJSDIRS)
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re

