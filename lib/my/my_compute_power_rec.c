/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** Function that returns the first argument raised to the power
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);

    return (nb * my_compute_power_rec(nb, p - 1));
}