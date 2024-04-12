# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/30 19:56:59 by gbarulls          #+#    #+#              #
#    Updated: 2023/05/26 19:15:08 by gbarulls         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

## Main Software

SRC_DIR		= src/
OBJ_DIR		= obj/

SRCS_FILES	= src/ft_char_pf src/ft_num_pf src/ft_printf src/ft_pointer
SRCDIRS		= $(shell find src/ -type d)
SRCS 		= src/ft_char_pf.c src/ft_num_pf.c src/ft_printf.c src/ft_pointer.c

OBJSDIRS	= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(SRCDIRS))
OBJSTEMP	= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(SRCS_FILES))
OBJS		= $(addsuffix .o, $(OBJSTEMP))

## Libraries

LIBS		= include/ft_printf.h
INCLUDE_DIR	= ./include/

## Commands

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -I$(INCLUDE_DIR)
AR			= ar rcs
RANLIB		= ranlib
RM			= rm -rf
MKDIR		= mkdir -p

## Execution

all:		$(NAME)

$(NAME):	$(OBJSDIRS) $(OBJS)
			$(AR) $(NAME) $(OBJS)
			$(RANLIB) $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(LIBS) Makefile
			$(CC) $(CFLAGS) -c $< -o $@

$(OBJSDIRS) :
			@$(MKDIR) $(OBJSDIRS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(OBJSDIRS)
			$(RM) $(NAME)

re:			fclean $(NAME)

normi:
			@norminette $(SRCS)
			@norminette $(INCLUDE_DIR)

info:
			$(info $(SRCS_FILES))
			$(info $(OBJS))

.PHONY:		all clean fclean re info normi
