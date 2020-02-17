/*
** EPITECH PROJECT, 2019
** list_foreach
** File description:
** loop a list
*/

#include <stdlib.h>
#include "my.h"

void list_foreach(list *v, int (*callback)(void *))
{
    list *node = v;
    int result = 1;
    while (node != NULL && result) {
        if (callback != NULL)
            result = callback(node->data);
        node = node->next;
    }
}