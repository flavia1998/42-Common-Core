#compilador
CC = gcc  

#flags
CFLAGS = -Wall -Werror -Wextra 

#nome da biblioteca a criar
NAME = libft.a 

# ar = criar um unico ficheiro com uma colecao de varios outros ficheiros, r - insere o ficheiro, c - cria pasta, s - escrever um arquivo-objeto indexar ao arquivo existente/act
CREATE = ar rcs 

#ficheiros .c a adicionar
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c 

OBJS = ${SRCS:.c=.o} 

RM = rm -f

%.o: %.c
	$(CC) $(CFLAGS) -c -I . $< -o $@

$(NAME) : $(OBJS)
	$(CREATE) $(NAME) $(OBJS)

all : $(NAME)

clean : 
	${RM} ${OBJS}

fclean : clean  
	${RM} ${NAME}

re : fclean all

