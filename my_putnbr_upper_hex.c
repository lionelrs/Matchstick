/*
** EPITECH PROJECT, 2019
** my_putnbr_hex
** File description:
** display decimal in hexadecimal base
*/

#include "print.h"

void my_putnbr_upper_hex(unsigned int nb)
{
    if (nb < 0) {
        nb = -nb;
        my_putnbr_upper_hex(nb);
    }
    else if (nb > 0) {
        if (nb % 16 < 10) {
            my_putnbr_upper_hex(nb / 16);
            my_putnbr(nb % 16);
        }
        else{
            my_putnbr_upper_hex(nb / 16);
            my_putchar((nb % 16) + 55);
        }
    }
}