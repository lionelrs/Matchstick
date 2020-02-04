/*
** EPITECH PROJECT, 2019
** my_putnbr_bin
** File description:
** covert decimal to binary
*/

#include "print.h"

void my_putnbr_bin(unsigned int nb)
{
    if (nb < 0){
        nb = -nb;
        my_putnbr_bin(nb);
    }
    else if (nb > 0) {
        my_putnbr_bin(nb / 2);
        my_putnbr(nb % 2);
    }
}
