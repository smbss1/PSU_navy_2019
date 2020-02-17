/*
** EPITECH PROJECT, 2019
** my
** File description:
** Header contains all functions prototyped
*/

#ifndef _MY_
#define _MY_

#include <stdio.h>

/********************************STRUCT***********************************/

typedef struct {
    char *flag;
    void (*normal)(char **str, void *c);
} flag_t_t;

typedef struct s_vector
{
    size_t size;
    size_t capacity;
    size_t element_size;
    void **data;
} vector;

typedef struct s_list
{
    void *data;
    struct s_list *prev;
    struct s_list *next;
} list;

typedef struct s_dictionary
{
    char *key;
    void *data;
    struct s_dictionary *prev;
    struct s_dictionary *next;
} dictionary;

/****************************************************************************/
/****************************PUTS FUNCTION***********************************/

void my_putstr(char const *str);
void my_put_float(double nb);
void my_putchar(char c);
void my_put_nbr(int nb);
void my_putbase(int nb, const char *base);
void my_put_unsigned(unsigned int nb);
void my_printf(const char *, ...);
void my_sprintf(char *buffer, const char *, ...);

void print_char(char **str, int c);
void print_char_void(char **str, void *c);
void print_str(char **str, void *s);
void print_nbr(char **str, void *nbr);
void print_base(char **str, void *nbr, const char *base);
void print_hex(char **str, void *nbr);
void print_HEX(char **str, void *nbr);
void print_octal(char **str, void *nbr);
void print_binary(char **str, void *nbr);
void print_prefixe_HEX(char **str, void *nbr);
void print_prefixe_hex(char **str, void *nbr);
void print_prefixe_octal(char **str, void *nbr);

/****************************************************************************/

char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strstr(char *str, char const *to_find);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_char_isalpha(char str);
int my_char_isnum(char str);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_isneg(int n);
int my_is_prime(int nb);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
char *my_strcat(char *dest, char const *src);
int my_str_islower(char const *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strncat(char *dest, char const *src, int nb);
void my_swap(int *a, int *b);
int condition(char const *str, int i, long *p_verif, unsigned long *p_verif2);
int my_show_word_array(char * const *tab);
char **my_str_to_word_array(char *str, char *delim);
char *my_strdup(char const *src);
char *my_char_to_str(char c);
char *my_charcat(char *dest, char src);
char my_int_to_char(int digit);
int my_char_to_int(char str);
char *my_strchr(char *str, int c);
char *my_strtok(char *str, char *delim);
int my_strtol(char *str, char **endptr);

int my_add(int a, int b);
int my_sub(int a, int b);
int my_mul(int a, int b);
int my_div(int a, int b);
int my_mod(int a, int b);

int read_file(char *file);
void write_file(char *file, char *data);
int fs_open_file(char const *filepath);
char *load_file_in_mem(char const *filepath);
char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols);

/******************************MEMORY FUNCTION*******************************/
/**
* \brief Allocates memory to the 2d array
* \param nb_rows : This is the num of rows that will be allocated for the array
* \param nb_cols : This is the num of col that will be allocated for the array
* \return A new allocated 2d array
*/
char **mem_alloc_2d_array(int nb_rows, int nb_cols);

/**
* \brief Allocates memory to the 2d array
* \note This function not return a char 2d array but an int 2d array
* \param nb_rows : This is the num of rows you want to allocate for the array
* \param nb_cols : This is the num of col you want to allocate for the array
* \return A new allocated 2d array
*/
int **mem_alloc_2d_array_int(int nb_rows, int nb_cols);
char **my_memset_array(char **ptr, int x, int r, int c);
void *my_memset(void *ptr, int x, int n);
void *my_memcpy(void *dest, const void *src, size_t len);
void *my_memmove(void *dest, const void *src, size_t len);
void *my_realloc(void *ptr, size_t original_size, size_t size);

/****************************************************************************/


void free_2d_array(void **array);

void set_variable(char *str, char *name, char *data);
int get_number(char *str, char *word);
char *get_str(char *str, char *word);
char *get_variable_name(char *str, char *word);

/**
* \brief Reads a line from the specified file descriptor
*  and stores it into the string array
* \details It stops when either bytes characters are read,
*  the newline character is read, or the end-of-file is reached,
*  whichever comes first.
* \param my_string : This is an array of chars where the string read is stored.
* \param bytes : This is the maximum number of characters to be read
* \note Usually, the length of the array passed as my_string is used.
* \param fd : This is the file descriptor of the file where
*  characters are read from.
* \return
*  On success, the function returns the same my_string parameter.
*  If End-Of-File encountered or no characters have been read,
*  the contains of my_string will remain unchanged.
*  If an error occurs, a null pointer is returned.
*/
char *fs_get(char my_string[], int bytes, int fd);

/******************************VECTOR FUNCTIONS*******************************/

#define VECTOR_MINIMUM_CAPACITY (2)
#define VECTOR_GROW_FACT (2)
#define VECTOR_SHRINK_THRESHOLD (1 / 4)
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int vector_destroy(vector *vector);
vector *vector_add(vector **head_ref, void *data);
void *vector_get(vector *vector, size_t index);
int vector_getsize(vector *begin);
void vector_foreach(vector *v, int (*callback)(void *));
int vector_is_initialized(vector *vector);
int vector_copy(vector *dest, vector *src);
size_t vector_byte_size(const vector *vector);
int vector_init(vector *vector, size_t capacity);
int _vector_should_grow(vector *vector);
int _vector_reallocate(vector *vector, size_t new_capacity);
int _vector_adjust_capacity(vector *vector);
int vector_push_front(vector *vector, void *element);
int vector_push_back(vector *vector, void *element);
int vector_pop_back(vector *vector);
int vector_pop_front(vector *vector);
void _vector_assign(vector *vector, size_t index, void *element);
int vector_assign(vector *vector, size_t index, void *element);
void *_vector_offset(vector *vector, size_t index);
int _vector_move_right(vector *vector, size_t index);
void _vector_move_left(vector *vector, size_t index);
int vector_move_assign(vector *destination, vector *source);
int vector_move(vector *destination, vector *source);
int vector_swap(vector *destination, vector *source);
void _vector_swap(size_t *first, size_t *second);
int vector_insert(vector *vector, size_t index, void *element);
void *vector_front(vector *vector);
void *vector_back(vector *vector);
int vector_resize(vector *vector, size_t new_size);
int vector_remove(vector *vector, size_t index);
int vector_clear(vector *vector);
int vector_reserve(vector *vector, size_t minimum_capacity);
int _vector_should_shrink(vector *vector);
int vector_shrink_to_fit(vector *vector);
int vector_is_empty(const vector *vector);
size_t vector_free_space(const vector *vector);

/****************************************************************************/

/******************************LIST FUNCTIONS*******************************/

void list_delete(list **v, int index);
void list_delete_all(list *v);
list *list_add(list **head_ref, void *data);
void *list_pop(list **array);
void *list_get_at(list **v, int index);
list *list_getnode_at(list **v, int index);
void list_set_at(list **v, int index, void *item);
int list_getsize(list *begin);
void list_foreach(list *v, int (*callback)(void *));
void list_reverse(list **begin);

/****************************************************************************/

/*************************DICTIONARY FUNCTIONS*******************************/

dictionary *dictionary_add(dictionary **head_ref, char *key, void *data);
void dictionary_delete(dictionary **dict, char *key);
void dictionary_delete_all(dictionary *v);
dictionary *dictionary_getnode(dictionary **dict, char *key);
int dictionary_getsize(dictionary *begin);
void *dictionary_getvalue(dictionary **dict, char *key);
int dictionary_key_exists(dictionary **dict, char *key);
void dictionary_foreach_value(dictionary *v, int (*callback)(void *));
void dictionary_foreach_key(dictionary *v, int (*callback)(char *));
void dictionary_foreach(dictionary *v, int (*callback)(char *, void *));
void dictionary_sort(dictionary **dict, int (*compare)(void *, void *));
void dictionary_sort_by_key(dictionary **dict);

/****************************************************************************/

#endif