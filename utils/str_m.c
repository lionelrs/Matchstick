/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** str_m
*/

#include "match.h"

int arr_len(int *arr)
{
    int i = 0;

    if (arr == NULL)
        return (0);
    while (arr[i] != -1) {
        i++;
    }
    return (i);
}

void my_strcat(char *s1, char *s2)
{
    int i = 0, len = my_strlen(s1);
    for (; s2[i] != '\0'; i++) {
        s1[len + i] = s2[i];
    }
    s1[len + i] = '\0';
}

void my_strcpy(char *s1, char *s2)
{
    int i = 0;
    for (; s2[i] != 0; i++) {
        s1[i] = s2[i];
    }
    s1[i] = '\0';
}

int my_strlen(char *str)
{
    int i = 0;

    if (str == NULL)
        return (0);
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

int my_atoi(char *str)
{
    int i = 0, nb = 0, j = 1;
    if (str == NULL)
        return (-1);
    if (str[0] == '-') {
        i++;
        j = -1;
    }
    while (str[i]) {
        if (str[i] < '0' || str[i] > '9')
            return (-1);
        nb = nb * 10 + (str[i++] - 48);
    }
    nb *= j;
    return (nb);
}
