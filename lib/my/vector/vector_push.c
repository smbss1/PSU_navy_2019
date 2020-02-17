/*
** EPITECH PROJECT, 2019
** vector_push_back
** File description:
** push back
*/

#include "my.h"

int vector_push_back(vector *vector, void *element)
{
    int status = -1;

    if (_vector_should_grow(vector)) {
        status = vector_resize(vector, vector->capacity * 2);
        if (status != -1) {
            vector->data[vector->size++] = element;
            return 0;
        } else
            return -1;
    }
    vector->data[vector->size++] = element;
    return 0;
}

int vector_push_front(vector *vector, void *element)
{
    return vector_insert(vector, 0, element);
}