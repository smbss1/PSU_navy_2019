/*
** EPITECH PROJECT, 2019
** vector_move
** File description:
** move
*/

#include "my.h"

int _vector_move_right(vector *vector, size_t index)
{
    void *offset = _vector_offset(vector, index);
    size_t elements_in_bytes = (vector->size - index) * vector->element_size;
    my_memmove(offset + vector->element_size, offset, elements_in_bytes);
    return 0;
}

void _vector_move_left(vector *vector, size_t index)
{
    size_t right_elements_in_bytes;
    void *offset;

    offset = _vector_offset(vector, index);
    right_elements_in_bytes = (vector->size - index - 1) * vector->element_size;
    my_memmove(offset, offset + vector->element_size, right_elements_in_bytes);
}

int vector_move(vector *destination, vector *source)
{
    if (destination == NULL)
        return -1;
    if (source == NULL)
        return -1;

    *destination = *source;
    source->data = NULL;

    return 0;
}

int vector_move_assign(vector *destination, vector *source)
{
    vector_swap(destination, source);
    return vector_destroy(source);
}