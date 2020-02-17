/*
** EPITECH PROJECT, 2019
** test_my_putstr
** File description:
** test my putstr
*/

#include <criterion/criterion.h>
#include  <criterion/redirect.h>
#include "my.h"

redirect_stdout();

Test(my_putstr, good_str, .init = redirect_stdout)
{
    my_putstr("hello world");
    cr_assert_stdout_eq_str("hello world");
}