/*
** EPITECH PROJECT, 2019
** my_putfloat
** File description:
** display float
*/

#include "print.h"

void my_putfloat(float nb)
{
    long long int left = nb;
    long long int right;
    int j = 0;
    my_putnbr(left);
    my_putchar('.');

    while (j < 6) {
        left = nb;
        nb = nb * 10;
        left = left * 10;
        right = nb - left;
        my_putnbr(right);
        j++;
    }
}