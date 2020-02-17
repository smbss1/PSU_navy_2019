/*
** EPITECH PROJECT, 2019
** vector_adjust_capacity
** File description:
** adjust capacity
*/

#include "my.h"

int _vector_adjust_capacity(vector *vector)
{
    return _vector_reallocate(vector, MAX(1, vector->size * VECTOR_GROW_FACT));
}