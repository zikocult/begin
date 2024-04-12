# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 17:23:15 by gbaruls-          #+#    #+#              #
#    Updated: 2024/04/11 17:24:49 by gbaruls-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_cat

SRCS_FILES	= ft_cat

SRCS 		= $(addsuffix .c, $(SRCS_FILES))
OBJS		= $(addsuffix .o, $(SRCS_FILES))

CC			= cc
CFLAGS		= -Wall -Wextra -Werror 
AR			= ar rcs
RANLIB		= ranlib
RM			= rm -rf
MKDIR		= mkdir -p

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c Makefile
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
