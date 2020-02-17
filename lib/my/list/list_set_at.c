/*
** EPITECH PROJECT, 2019
** list_set_at
** File description:
** replace the old value to the new on the node finded with the index
*/

#include <stdlib.h>
#include "my.h"

void list_set_at(list **v, int index, void *item)
{
    list *tmp = list_getnode_at(v, index);
    tmp->data = item;
}