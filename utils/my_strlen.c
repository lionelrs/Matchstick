/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** counts length of a string
*/

#include "print.h"

int my_strlen(char *str)
{
    int i = 0;

    if (str == NULL)
        return (EXIT_FAILURE);
    else {
        while (str[i]) {
            i++;
        }
        return (i);
    }
}
