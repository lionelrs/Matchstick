/*
** EPITECH PROJECT, 2019
** print.h
** File description:
** header file
*/

#ifndef _PRINT_H_
#define _PRINT_H_

#include <stdlib.h>
#include <unistd.h>

int my_strlen(char *str);
void my_putchar(char c);
void my_putstr(char *str);
void my_putnbr(int nb);
void my_putnbr_bin(unsigned int nb);
void my_putnbr_oct(unsigned int nb);
void my_putnbr_upper_hex(unsigned int nb);
void my_putnbr_lower_hex(unsigned int nb);
int my_printf(char *str, ...);
void s_flag(unsigned char *str);
void my_put_uns_int(unsigned int nb);
void my_putnbr_llong_hex(long long int nb);
void print_adress(long long int nb);
void my_putfloat(float nb);

#endif
