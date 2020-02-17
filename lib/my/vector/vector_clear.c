/*
** EPITECH PROJECT, 2019
** vector_clear
** File description:
** clear the vector
*/

#include "my.h"

int vector_clear(vector *vector)
{
    return vector_resize(vector, 0);
}