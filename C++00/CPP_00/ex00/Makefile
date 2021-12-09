# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmkrtchy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/03 15:59:22 by hmkrtchy          #+#    #+#              #
#    Updated: 2021/10/03 15:59:23 by hmkrtchy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= $(shell find "." -maxdepth 2 -name "*.cpp")
OBJS		= ${SRCS:.c=.o}
NAME		= megaphone
CC			= clang++
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -cpp $< -o ${<:.cpp=.o}
all : ${NAME}

fclean : clean
	${RM} ${NAME}
re : fclean all

.PHONY: all clean fclean re .c.o

