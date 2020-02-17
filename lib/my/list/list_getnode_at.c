/*
** EPITECH PROJECT, 2019
** list_getnode_at
** File description:
** get the node on the index we given in params
*/

#include <stdlib.h>
#include "my.h"

list *list_getnode_at(list **v, int index)
{
    int i = 0;

    for (list *tmp = *v; tmp != NULL; tmp = tmp->next, i++)
        if (i == index)
            return (tmp);
    return (NULL);
}