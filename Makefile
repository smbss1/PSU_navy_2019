#
# EPITECH PROJECT, 2019
# Makefile
# File description:
# make an executable
#

SRC = 	main.c
OBJ = $(SRC:.c=.o)
NAME = main
_SRC = ./lib/my/puts/my_putstr.c
TEST_SRC =	tests/redirect_stdout.c tests/test_my_putstr.c
TEST_NAME = unit_tests

CFLAGS += -I ./include/
CFLAGS += -L ./lib/
CFLAGS += -lmy
CFLAGS += -lgc
CFLAGS += -W -Wall

bold = [1m
green = [32m
yellow = [33m
blue = [34m
white = [37m
reset = (B[m

all: $(NAME)

lib_make:
	@$(MAKE) -C ./lib/my/ -s
	@$(MAKE) -C ./lib/tiny_garbage/ -s

$(NAME): lib_make $(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(bold)$(green)Compiled $(white)'$<'$(reset)"

clean:
	@rm -f $(OBJ)
	@rm -f *.gcno
	@rm -f *.gcda

fclean: clean
	@rm -f $(NAME)
	@rm -f $(TEST_NAME)
	@rm -f vgcore*
	@$(MAKE) -C ./lib/my/ fclean -s
	@$(MAKE) -C ./lib/tiny_garbage/ fclean -s

re: fclean all

install:
	@echo "Install"

run:
	./$(NAME)

tests_run: lib_make
	@echo -e "\033[1;95mRunning tests...\033[0;39m"
	@gcc -o $(TEST_NAME) $(_SRC) $(TEST_SRC) $(CFLAGS) --coverage -lcriterion
	./$(TEST_NAME)
	gcovr
	@echo "\033[1;94mTest finished, here are the results\033[0;39m"