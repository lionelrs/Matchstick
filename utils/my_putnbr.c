/*
** EPITECH PROJECT, 2019
** my_putnbr
** File description:
** display an integer
*/

#include "print.h"

void my_putnbr(int nb)
{
    if (nb > -2147483648 && nb < 2147483648) {
        if (nb < 0) {
            my_putchar('-');
            nb = -nb;
        }
        if (nb > 9) {
            my_putnbr(nb / 10);
        }
        my_putchar((nb % 10) + '0');
    } else {
        write(2, "Invalid int size.\n", 18);
        return;
    }
}