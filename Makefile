HEADER = libft.h

NAME = libft.a

LIB = libft.a

FILES = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memset.c ft_putchar_fd.c  ft_putnbr_fd.c ft_putstr_fd.c \
ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strlcat.c \
ft_memcpy.c ft_memmove.c ft_strncmp.c ft_putendl_fd.c ft_memcmp.c \

FILES_OBJ = $(FILES:.c=.o)

all: $(FILES_OBJ) $(HEADER)
	ar rc $(LIB)

$(NAME): all

%.o: %.c
	gcc -c $< -o $@ -Wall -Wextra -Werror

clean:
	rm -f $(FILES_OBJ)

fclean: clean
	rm -f $(LIB)

re: fclean all
