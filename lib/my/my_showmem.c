/*
** EPITECH PROJECT, 2019
** my_showmem
** File description:
** Function that
*/

#include "my.h"

void show_line(char *str, int size)
{
    int i = 0;
    my_putptr_base(str, "0123456789ABCDEF");
    my_putstr(": ");
    while (i < size) {
        if (str[i] < 16)
            my_putchar('0');
        my_putnbr_base(str[i], "0123456789ABCDEF");
        if (i % 2 == 1)
            my_putchar(' ');
        i = i + 1;
    }
    i = 0;
    while (i < size) {
        if (is_printable(str[i]))
            my_putchar(str[i]);
        else
            my_putchar('.');
        i = i + 1;
    }
    my_putchar('\n');
}

int my_showmem(char const *str, int size)
{
    int i = 0;
    while (i < size) {
        show_line(str, 16);
        str = str + 16;
        i = i + 1;
    }
    return (0);
}