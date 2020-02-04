/*
** EPITECH PROJECT, 2019
** my_putnbr_oct
** File description:
** converts decimal to octal
*/

#include "print.h"

void my_putnbr_oct(unsigned int nb)
{
    if (nb < 0){
        nb = -nb;
        my_putnbr_oct(nb);
    }
    else if (nb > 0) {
        my_putnbr_oct(nb / 8);
        my_putnbr(nb % 8);
    }
}