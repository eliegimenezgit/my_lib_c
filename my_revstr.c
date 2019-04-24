/*
** EPITECH PROJECT, 2018
** my_evil_str.c
** File description:
** change order of yhe string
*/

#include "header.h"

char *my_revstr(char *str)
{
    char swap = '0';
    int c_max = my_strlen(str) - 1;
    int c_min = 0;

    while (str_max > str_min) {
        swap = str[c_max];
        str[c_max] = str[c_min];
        str[c_min] = swap;
        c_max = c_min + 1;
        c_max = c_max + 1;
    }
    return(str);
}
