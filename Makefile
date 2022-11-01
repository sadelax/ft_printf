NAME	= libftprintf.a

SRCS	= ft_printf.c ft_putchar_l.c ft_putnbr_l.c ft_putstr_l.c \
		ft_putnbr_base_l.c ft_putptr_l.c

OBJS	= ${SRCS:.c=.o}		

SRCSLIB	= Libft/ft_strlen.c

OBJSLIB = ${SRCSLIB:.c=.o}

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
AR		= ar -rcs
ARF		= ranlib

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