# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tosilva <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/10 12:15:15 by tosilva           #+#    #+#              #
#    Updated: 2020/11/10 15:11:45 by tosilva          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the project
PROJ_NAME		= bsq

# Sources Folder
SRC_DIR			= sources

# .c Files
C_SRCS		= $(wildcard ./${SRC_DIR}/*.c)

# .h Files
H_SRCS		= $(wildcard ./${SRC_DIR}/*.h)

# Objects Folder
OBJ_DIR		= objects

# Object Files
OBJS			= ${SRCS:.c=.o}

# Library
LIB				= lib${PROJ_NAME}.a

# Compiler
CC				= gcc

# Compiler Flags
CC_FLAGS		= -Wall -Wextra -Werror

# Create Libraries
ARRC			= ar rc

# Norm
NORM			= norminette

# Norm Flags
NORM_FLAGS		= -R CheckForbiddenSourceHeader

# Create Directories
MKDIR			= mkdir -p

# Delete Command
RM				= rm -fr


all:			objsFolder ${PROJ_NAME}

${PROJ_NAME}:	${OBJS}
				${CC} ${OBJS} -o ${PROJ_NAME}

objsFolder:	
				${MKDIR} ${OBJ_DIR}

c.o.:		
				${CC} ${CC_FLAGS} -c $< -o ${<:.c=.o}
				${ARRC} ${LIB} 

library:		${OBJS}
				${ARCRC} ${LIB} ${OBJS}

norm:
				@ echo 'Executing Norminette..'
				${NORM} ${NORM_FLASG} ${C_SRCS} ${H_SRCS}
				@ echo ' '

clean:		
				${RM} ${OBJ_DIR} 

fclean:			clean
				${RM} ${PROJ_NAME}

re:				fclean all clean

.PHONY: 		re
