/*
** EPITECH PROJECT, 2019
** redirect_stdout
** File description:
** redirect the stdoutput
*/

#include  <criterion/redirect.h>

void redirect_stdout(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}