/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** displays a string
*/

#include "print.h"

void my_putstr(char *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i++]);
    }
}