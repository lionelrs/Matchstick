/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** displays a character
*/

#include "print.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}