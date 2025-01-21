NAME1	=	Colleen
NAME2	=	Grace
NAME3	=	Sully

RM		=	rm -f

SRCS1	=	Colleen.s
SRCS2	=	Grace.s
SRCS3	=	Sully.s
SRCS	=	${SRCS1} ${SRCS2} ${SRCS3}
	
OBJS1	:=	${SRCS1:.s=.o}
OBJS2	:=	${SRCS2:.s=.o}
OBJS3	:=	${SRCS3:.s=.o}
OBJS	:=	${SRCS:.s=.o}

SRCS_CHILDREN	:=	$(wildcard Sully_[0-5].s)
BIN_CHILDREN	:=	${SRCS_CHILDREN:.s=}
SRCS_CHILDREN	+=	Grace_kid.s

all: ${NAME1} ${NAME2} ${NAME3}

%.o: 		%.s
			as -o $@ $?

${NAME1}: 	${OBJS1}
			ld -o $@ $?

${NAME2}: 	${OBJS2}
			$(CC) $(CFLAGS) -o $@ $^

${NAME3}: 	${OBJS3}
			$(CC) $(CFLAGS) -o $@ $^

clean:
			$(RM) ${OBJS}
			$(RM) ${SRCS_CHILDREN}
			$(RM) ${BIN_CHILDREN}

fclean: 	clean
			$(RM) ${NAME1} ${NAME2} ${NAME3}

re: 		fclean all

.PHONY: all clean fclean re
