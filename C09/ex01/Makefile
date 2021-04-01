# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmariot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/01 07:48:55 by cmariot           #+#    #+#              #
#    Updated: 2021/04/01 11:14:05 by cmariot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= libft.a

SRCD	= srcs/

SRCS	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS	= ${addprefix ${SRCD},${SRCS:.c=.o}}

HEAD	= includes/ft.h

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rc ${NAME} ${OBJS}

all :        ${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
