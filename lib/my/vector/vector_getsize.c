/*
** EPITECH PROJECT, 2019
** my_list_size
** File description:
** Func that returns the number of elemnts onthe list
*/

#include "my.h"
#include <stdlib.h>

int vector_getsize(vector *begin)
{
    return (begin->size);
}