CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

so: $(OBJ)
	$(CC) -shared -o libft.so $(OBJ)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all