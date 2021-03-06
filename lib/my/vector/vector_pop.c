/*
** EPITECH PROJECT, 2019
** pop
** File description:
** removes List2 first value ant push it at the beginnig of List1
*/

#include <stdlib.h>
#include "my.h"

int vector_pop_back(vector *vector)
{
    if (vector == NULL)
        return -1;
    if (vector->element_size == 0)
        return -1;

    --vector->size;

#ifndef VECTOR_NO_SHRINK
    if (_vector_should_shrink(vector))
        _vector_adjust_capacity(vector);
#endif
    return 0;
}

int vector_pop_front(vector *vector)
{
    return vector_remove(vector, 0);
}