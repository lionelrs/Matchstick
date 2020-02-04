/*
** EPITECH PROJECT, 2019
** fc_ptr_tab
** File description:
** array of function pointers
*/

#include "print.h"
#include <stdarg.h>

int check_flag(char c)
{
    char *flags = "sdiboxXSup";
    int i = 0;

    while (flags[i]) {
        if (c == flags[i])
            return (i);
        i++;
    }
    return (-1);
}

void print_flags(char *str, void (**ptr)(), va_list ap)
{
    int i = 0;
    while (str[i]) {
        while (str[i] != '%' && str[i] != '\0') {
            my_putchar(str[i]);
            i++;
        }
        if (str[i] == '\0')
            break;
        if (str[i] == '%' && str[i + 1] == '%')
            my_putchar('%');
        i++;
        if (check_flag(str[i]) >= 0)
            (*ptr[check_flag(str[i])])(va_arg(ap, void *));
        if (str[i] == 'c')
            my_putchar(va_arg(ap, int));
        if (str[i] == 'f')
            my_putfloat(va_arg(ap, double));
        va_end(ap);
        i++;
    }
}

int my_printf(char *str, ...)
{
    void (*ptr[10])() = {my_putstr, my_putnbr, my_putnbr,
        my_putnbr_bin, my_putnbr_oct, my_putnbr_lower_hex,
        my_putnbr_upper_hex, s_flag, my_put_uns_int, print_adress};
    va_list ap;

    va_start(ap, str);
    print_flags(str, ptr, ap);

    return (0);
}
