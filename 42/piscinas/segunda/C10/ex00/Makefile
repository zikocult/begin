# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbaruls- <gbaruls-@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/08 15:40:29 by gbaruls-          #+#    #+#              #
#    Updated: 2024/04/08 15:49:50 by gbaruls-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_display_file

SRCS_FILES	= ft_display_file

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
