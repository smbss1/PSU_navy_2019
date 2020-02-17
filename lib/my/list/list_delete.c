/*
** EPITECH PROJECT, 2019
** list_delete
** File description:
** Delete a node
*/

#include <stdlib.h>
#include "my.h"

void list_delete(list **v, int index)
{
    list *delete_node;
    list *prev;
    int i = 0;

    if (index == 0) {
        delete_node = *v;
        *v = delete_node->next;
        free(delete_node);
        return;
    }
    for (list *tmp = *v; tmp != NULL; tmp = tmp->next, i++)
        if (i == index) {
            delete_node = tmp;
            prev = delete_node->prev;
            prev->next = delete_node->next;
            break;
        }
    free(delete_node);
}

void list_delete_all(list *v)
{
    list *temp;

    while (v != NULL) {
        temp = v;
        v = v->next;
        free(temp);
    }
}