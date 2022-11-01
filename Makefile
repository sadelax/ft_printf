NAME	= libftprintf.a

SRCS	= ft_printf.c

OBJS	= ${SRCS:.c=.o}		

SRCSLIB	= libft/ft_strlen.c

OBJSLIB = ${SRCSLIB:.c=.o}

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
AR		= ar -rcs
ARF		= ranlib
BONUS	= .

.c.o:
			${CC} ${CFLAGS} -c $< -o $@

all:		${NAME}
${NAME}:	${OBJSLIB} ${OBJS}
			${AR} ${NAME} ${OBJSLIB} ${OBJS}
			${ARF} ${NAME}


clean:
			${RM} ${OBJSLIB} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

