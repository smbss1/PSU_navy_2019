/*
** EPITECH PROJECT, 2019
** vector_should_shrink
** File description:
** should
*/

#include "my.h"

int _vector_should_shrink(vector *vector)
{
    return vector->size == vector->capacity * VECTOR_SHRINK_THRESHOLD;
}

int vector_shrink_to_fit(vector *vector)
{
    return _vector_reallocate(vector, vector->size);
}