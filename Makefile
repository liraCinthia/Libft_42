HEADER = libft.h

NAME = libft.a

LIB = libft.a

FILES = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memset.c ft_putchar_fd.c  ft_putnbr_fd.c ft_putstr_fd.c \
ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strchr.c \
ft_memcpy.c ft_memmove.c ft_strncmp.c ft_memcmp.c ft_strrchr.c ft_putendl_fd.c \
ft_memchr.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c \
ft_itoa.c ft_strtrim.c ft_striteri.c ft_strmapi.c ft_substr.c ft_split.c \

FILES_OBJ = $(FILES:.c=.o)

all: $(FILES_OBJ) $(HEADER)
	ar rcs $(LIB) $^

$(NAME): all

%.o: %.c
	gcc -c $< -o $@ -Wall -Wextra -Werror

clean:
	rm -f $(FILES_OBJ)

fclean: clean
	rm -f $(LIB)

re: fclean all
