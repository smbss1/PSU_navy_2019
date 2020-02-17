/*
** EPITECH PROJECT, 2019
** create_element
** File description:
** create a new element
*/

#include <stdlib.h>
#include "my.h"

list *list_add(list **head_ref, void *data)
{
    list *element = malloc(sizeof(list));
    element->data = data;
    element->next = (*head_ref);
    element->prev = NULL;
    if ((*head_ref) != NULL)
        (*head_ref)->prev = element;
    (*head_ref) = element;
    return (element);
}