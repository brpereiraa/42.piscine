NAME = bsq

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = src/main.c src/run.c src/info.c src/map.c src/square.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all