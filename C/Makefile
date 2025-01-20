NAME1	=	Colleen
NAME2	=	Grace
NAME3	=	Sully

CC		=	clang

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

SRCS1	=	Colleen.c
SRCS2	=	Grace.c
SRCS3	=	Sully.c
SRCS	=	${SRCS1} ${SRCS2} ${SRCS3}
	
OBJS1	:=	${SRCS1:.c=.o}
OBJS2	:=	${SRCS2:.c=.o}
OBJS3	:=	${SRCS3:.c=.o}
OBJS	:=	${SRCS:.c=.o}

SRCS_CHILDREN	:=	$(wildcard Sully_[0-5].c)
BIN_CHILDREN	:=	${SRCS_CHILDREN:.c=}
SRCS_CHILDREN	+=	Grace_kid.c

all: ${NAME1} ${NAME2} ${NAME3}

${NAME1}: 	${OBJS1}
			$(CC) $(CFLAGS) -o $@ $^

${NAME2}: 	${OBJS2}
			$(CC) $(CFLAGS) -o $@ $^

${NAME3}: 	${OBJS3}
			$(CC) $(CFLAGS) -o $@ $^

%.o: 		%.c
			$(CC) $(CFLAGS) -o $@ -c $<

clean:
			$(RM) ${OBJS}
			$(RM) ${SRCS_CHILDREN}
			$(RM) ${BIN_CHILDREN}

fclean: 	clean
			$(RM) ${NAME1} ${NAME2} ${NAME3}

re: 		fclean all

.PHONY: all clean fclean re
