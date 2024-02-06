NAME			=	push_swap

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
AR				=	ar
ARFLAGS 		=	rcs
RM				=	rm -rf

SRC				=   push_swap_chekers push_swap
SRCS 			=	$(addsuffix .c, $(SRC))

OBJS 			= ${SRCS:.c=.o} 

LIBFTPRINTF_PATH=	ft_printf
LIBFTPRINTF 	=	$(LIBFTPRINTF_PATH)/libftprintf.a

INCLUDEDIRS 	= libft ft_printf
INCLUDES		= $(patsubst %,-I%, $(INCLUDEDIRS:%/=%))

LIBS			= libft/libft.a ft_printf/libftprintf.a

%.o: %.c
					$(CC) $(CFLAGS) $(INCLUDES) -c -I . $< -o $@

all:				$(NAME)

$(NAME): $(OBJS)
					make -C ${LIBFTPRINTF_PATH} all
					$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJS) $(LIBS)


clean:
					make -C $(LIBFTPRINTF_PATH) clean
					${RM} ${OBJS}

fclean:				clean
					make -C $(LIBFTPRINTF_PATH) fclean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re libft ft_printf

run: all
	./$(NAME)
	@echo Executing 'run: all' complete!