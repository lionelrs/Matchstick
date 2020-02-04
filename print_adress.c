/*
** EPITECH PROJECT, 2019
** print adress
** File description:
** displays adress of a variable
*/

#include "print.h"

void my_putnbr_llong_hex(long long int nb)
{
    if (nb < 0) {
        nb = -nb;
        my_putnbr_llong_hex(nb);
    }
    else if (nb > 0) {
        if (nb % 16 < 10) {
            my_putnbr_llong_hex(nb / 16);
            my_putnbr(nb % 16);
        }
        else{
            my_putnbr_llong_hex(nb / 16);
            my_putchar((nb % 16) + 87);
        }
    }
}

void print_adress(long long int nb)
{
    if (nb == 0)
        my_putchar('0');
    else{
        my_putstr("0x");
        my_putnbr_llong_hex(nb);
    }
}