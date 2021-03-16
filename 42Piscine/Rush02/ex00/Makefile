# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tosilva <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 17:45:36 by tosilva           #+#    #+#              #
#    Updated: 2020/11/12 14:27:28 by tosilva          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ${wildcard *.c}

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} 
			${CC} -o ${NAME} ${OBJS}

all:	${NAME}
		chmod +x ${NAME}


norm:	norminette -R CheckForbiddenSourceHeader *.c

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean norm all
