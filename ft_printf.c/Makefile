# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 15:28:51 by fvieira-          #+#    #+#              #
#    Updated: 2023/05/16 17:58:05 by fvieira-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variaveis
CC = cc
NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
CREATE = ar rcs
RM = rm -f
INCLUDELIBFT= -I libft 
OBJS = ${SRCS:.c=.o}
SRC = ft_putchar.c ft_putstr.c

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDELIBFT) -c -I . $< -o $@

$(NAME) : $(OBJS)
	$(CREATE) $(NAME) $(OBJS)

all : $(NAME)

clean : 
	$(RM) $(OBJS)

fclean : clean 
	$(RM) $(NAME) 

re : fclean all

.PHONY:		all clean fclean re 



