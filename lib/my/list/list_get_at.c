/*
** EPITECH PROJECT, 2019
** list_get
** File description:
** get the data with the index we given
*/

#include "my.h"

void *list_get_at(list **v, int index)
{
    list *tmp = list_getnode_at(v, index);
    return (tmp->data);
}