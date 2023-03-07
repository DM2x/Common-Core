NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = chars/ft_isalnum.c \
		chars/ft_isalpha.c \
		chars/ft_isascii.c \
		chars/ft_isdigit.c \
		chars/ft_isprint.c \
		chars/ft_tolower.c \
		chars/ft_toupper.c \
		memory/ft_bzero.c \
		memory/ft_calloc.c \
		memory/ft_memchr.c \
		memory/ft_memcmp.c \
		memory/ft_memcpy.c \
		memory/ft_memmove.c \
		memory/ft_memset.c \
		strings/ft_atoi.c \
		strings/ft_strchr.c \
		strings/ft_strdup.c \
		strings/ft_strlcat.c \
		strings/ft_strlcpy.c \
		strings/ft_strlen.c \
		strings/ft_strncmp.c \
		strings/ft_strnstr.c \
		strings/ft_strrchr.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

clean:
	rm -f $(OBJ)

run:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)