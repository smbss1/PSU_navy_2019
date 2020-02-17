/*
** EPITECH PROJECT, 2019
** vector_remove
** File description:
** remove the vector
*/

#include "my.h"

int vector_remove(vector *vector, size_t index)
{
    if (vector == NULL || vector->element_size == 0)
        return -1;
    if (index >= vector->size)
        return -1;

    _vector_move_left(vector, index);

#ifndef VECTOR_NO_SHRINK
    if (--vector->size == vector->capacity / 4)
        _vector_adjust_capacity(vector);
#endif

    return 0;
}
