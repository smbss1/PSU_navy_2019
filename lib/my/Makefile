#
# EPITECH PROJECT, 2019
# make lib
# File description:
# it makes files for the lib
#

DIR = .
SRC_PUTS = 	puts/my_putchar.c \
			puts/my_put_nbr.c \
			puts/my_put_float.c \
			puts/my_putbase.c \
			puts/my_put_unsigned.c \
			puts/my_put_long.c \
			puts/my_putstr.c

SRC_STRING= strings/my_strcpy.c \
			strings/my_strncpy.c \
			strings/my_revstr.c \
			strings/my_strcmp.c \
			strings/my_strstr.c \
			strings/my_strncmp.c \
			strings/my_strupcase.c \
			strings/my_strlowcase.c \
			strings/my_strcapitalize.c \
			strings/my_strcat.c \
			strings/my_str_islower.c \
			strings/my_str_isalpha.c \
			strings/my_str_isnum.c \
			strings/my_str_isprintable.c \
			strings/my_str_isupper.c \
			strings/my_strlen.c \
			strings/my_strncat.c \
			strings/my_str_to_word_array.c \
			strings/my_strdup.c \
			strings/my_strtok.c \
			strings/my_strchr.c \
			strings/my_strtol.c

SRC_VEC =	vector/vector_destroy.c \
			vector/vector_pop.c \
			vector/vector_getsize.c \
			vector/vector_get.c \
			vector/vector_foreach.c \
			vector/vector_copy.c \
			vector/vector_is_initialized.c \
			vector/vector_byte_size.c \
			vector/vector_init.c \
			vector/vector_insert.c \
			vector/vector_should_grow.c \
			vector/vector_reallocate.c \
			vector/vector_adjust_capacity.c \
			vector/vector_push.c \
			vector/vector_assign.c \
			vector/vector_offset.c \
			vector/vector_move.c \
			vector/vector_swap.c \
			vector/vector_resize.c \
			vector/vector_remove.c \
			vector/vector_clear.c \
			vector/vector_reserve.c \
			vector/vector_should_shrink.c

SRC_LIST =	list/list_delete.c \
			list/list_add.c \
			list/list_getsize.c \
			list/list_set_at.c \
			list/list_get_at.c \
			list/list_getnode_at.c \
			list/list_foreach.c \
			list/list_reverse.c

SRC_DICT =	dictionary/dictionary_delete.c \
			dictionary/dictionary_add.c \
			dictionary/dictionary_sort.c \
			dictionary/dictionary_getsize.c \
			dictionary/dictionary_key_exists.c \
			dictionary/dictionary_getvalue.c \
			dictionary/dictionary_getnode.c \
			dictionary/dictionary_foreach.c

SRC =	my_char_isalpha.c \
		my_char_isnum.c \
		my_compute_power_rec.c \
		my_compute_square_root.c \
		my_find_prime_sup.c \
		my_getnbr.c \
		my_isneg.c \
		my_is_prime.c \
		my_sort_int_array.c \
		my_swap.c \
		my_show_word_array.c \
		my_char_to_str.c \
		my_file_manager.c \
		my_operator.c \
		my_charcat.c \
		my_convert_char_int.c \
		my_printf.c \
		my_sprintf.c \
		my_print_puts.c \
		my_print_bases.c \
		my_print_bases_prefix.c \
		my_realloc.c \
		load_file_in_mem.c \
		fs_open_file.c \
		my_int_to_string.c \
		get_variable.c \
		set_variable.c \
		free_2d_array.c \
		mem_alloc_2d_array.c \
		load_2d_arr_from_file.c \
		fs_get.c \
		my_memset_array.c \
		get_next_line.c \
		$(SRC_PUTS) \
		$(SRC_STRING) \
		$(SRC_VEC) \
		$(SRC_DICT) \
		my_memset.c \
		my_memcpy.c \
		my_memmove.c

OBJ = $(SRC:.c=.o)
NAME = libmy

bold = `tput bold`
red = `tput setaf 1`
green = `tput setaf 2`
yellow = `tput setaf 3`
blue = `tput setaf 4`
magenta = `tput setaf 5`
cyan = `tput setaf 6`
white = `tput setaf 7`
reset = `tput sgr0`

all: $(NAME)

copy:
	@cp my.h ../include
	@cp -r ../include/ ../../

$(NAME): copy $(OBJ)
		@echo "$(bold)$(magenta)Compiling$(white) $(NAME) $(reset)"
		@ar -rc $(NAME).a $(OBJ)
		@cp $(NAME).a ../

%.o : %.c
	@gcc -I../include -W -Wall -c $< -o $@

.PHONY: clean
clean:
		@echo "$(bold)$(blue)Cleaning$(white) $(NAME)$(reset)"
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME).a
		@rm -f ../$(NAME).a

re: fclean all