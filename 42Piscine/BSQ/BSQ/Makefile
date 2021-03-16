# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tosilva <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/10 12:15:15 by tosilva           #+#    #+#              #
#    Updated: 2020/11/11 18:15:42 by tosilva          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the project
PROJ_NAME		= bsq

# .c Files
C_SRCS			= $(wildcard *.c)

# .h Files
H_SRCS			= $(wildcard *.h)

# Objects Folder
OBJ_DIR			= objects

# Object Files
OBJS			= ${C_SRCS:.c=.o}

# Compiler
CC				= gcc -g

# Compiler Flags
CC_FLAGS		= -Wall -Wextra -Werror

# Norm
NORM			= norminette

# Norm Flags
NORM_CFLAGS		= -R CheckForbiddenSourceHeader
NORM_LFLAGS		= -R CheckDefine

# Create Directories
MKDIR			= mkdir -p

# Delete Command
RM				= rm -fr


all:			${PROJ_NAME}

${PROJ_NAME}:	${OBJS}
				${CC} ${OBJS} -o ${PROJ_NAME}

.c.o:
				${CC} ${CC_FLAGS} -c $< -o ${<:.c=.o}

norm:
				@ echo ' '
				@ echo 'Executing Norminette...'
				@ echo ' '
				${NORM} ${NORM_CFLASG} ${C_SRCS}
				@ echo ' '
				${NORM} ${NORM_LFLAGS} ${H_SRCS}
				@ echo ' '

clean:		
				${RM} ${OBJS}

fclean:			clean
				${RM} ${PROJ_NAME}

re:				fclean all

.PHONY: 		re
