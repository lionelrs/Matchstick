/*
** EPITECH PROJECT, 2019
** my_putnbr_lower_hex
** File description:
** displays decimal in hexadecimal with lowercase
*/

#include "print.h"

void my_putnbr_lower_hex(unsigned int nb)
{
    if (nb < 0) {
        nb = -nb;
        my_putnbr_lower_hex(nb);
    }
    else if (nb > 0) {
        if (nb % 16 < 10) {
            my_putnbr_lower_hex(nb / 16);
            my_putnbr(nb % 16);
        }
        else{
            my_putnbr_lower_hex(nb / 16);
            my_putchar((nb % 16) + 87);
        }
    }
}