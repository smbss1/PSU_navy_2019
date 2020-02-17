/*
** EPITECH PROJECT, 2019
** list_reverse
** File description:
** reverse the list
*/

#include <stdlib.h>
#include "my.h"

void list_reverse(list **begin)
{
    list *next = NULL;
    list *current = *begin;
    list *prev = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *begin = prev;
}