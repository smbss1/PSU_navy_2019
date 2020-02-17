/*
** EPITECH PROJECT, 2019
** vector_foreach
** File description:
** loop a list
*/

#include <stdlib.h>
#include "my.h"

void vector_foreach(vector *v, int (*callback)(void *))
{
    int result = 1;
    for (int i = 0; v->data[i] != NULL && result; i++) {
        if (callback != NULL)
            result = callback(v->data[i]);
    }
}