# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/06 16:54:00 by gbaruls-          #+#    #+#              #
#    Updated: 2024/04/07 22:14:58 by gbaruls-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= rush-02
LIBS		= rush.h

SRC_DIR		=	src/
OBJ_DIR		=	obj/

SRCS_FILES	=	src/ft_init src/ft_show_number src/ft_utils src/main

SRCS 		= src/ft_init.c src/ft_show_number.c src/ft_utils.c src/main.c
SRCDIRS		= $(shell find src/ -type d)
OBJSDIRS	= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(SRCDIRS))
OBJSTEMP	= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(SRCS_FILES))
OBJS		= $(addsuffix .o, $(OBJSTEMP))

CC			= gcc
MFLAGS		= -Wall -Wextra -Werror -o
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

