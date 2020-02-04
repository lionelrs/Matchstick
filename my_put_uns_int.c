/*
** EPITECH PROJECT, 2019
** my_put_uns_int
** File description:
** displays unsigned integer
*/

#include "print.h"

void my_put_uns_int(unsigned int nb)
{
    if (nb >= 0 && nb <= 4294967295) {
        if (nb < 0) {
            my_putchar('-');
            nb = -nb;
        }
        if (nb > 9) {
            my_putnbr(nb / 10);
        }
        my_putchar((nb % 10) + '0');
    } else {
        write(2, "Invalid unsigned int size.\n", 28);
        return;
    }
}