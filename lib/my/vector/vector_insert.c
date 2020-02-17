/*
** EPITECH PROJECT, 2019
** vector_insert
** File description:
** insert a new element in the vector
*/

#include "my.h"

int vector_insert(vector *vector, size_t index, void *element)
{
    void *offset;

    if (vector == NULL || element == NULL)
        return -1;
    if (vector->element_size == 0 || index > vector->size)
        return -1;

    if (_vector_should_grow(vector))
        if (_vector_adjust_capacity(vector) == -1)
            return -1;
    if (_vector_move_right(vector, index) == -1)
        return -1;
    offset = _vector_offset(vector, index);
    my_memcpy(offset, element, vector->element_size);
    ++vector->size;

    return 0;
}