# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngomis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/28 16:40:11 by ngomis            #+#    #+#              #
#    Updated: 2021/03/28 18:23:27 by cmariot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= *.c

OBJS		= ${SRCS:.c=.o}

NAME		= rush-02

CC			= gcc

CCFLAGS		= -Wall -Werror -Wextra

all:		${NAME}

${NAME}:
					${CC} -c ${CCFLAGS} ${SRCS}
					${CC} ${CCFLAGS} -o ${NAME} ${OBJS}
clean:
					rm -f ${OBJS}

fclean:				clean
					rm -f ${NAME}

re:					fclean all

.PHONY:				all clean fclean re
