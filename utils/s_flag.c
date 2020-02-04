/*
** EPITECH PROJECT, 2019
** s_flag
** File description:
** non printable in octalbase
*/

#include "print.h"

void s_flag(unsigned char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] < 32) {
            if (str[i] < 8) {
                my_putstr("\\00");
                my_putnbr_oct(str[i]);
            } else if (str[i] > 7 && str[i] < 32){
                my_putstr("\\0");
                my_putnbr_oct(str[i]);
            }
        }
        else if (str[i] >= 127){
            my_putchar('\\');
            my_putnbr_oct(str[i]);
        } else
            my_putchar(str[i]);
        i++;
    }
}