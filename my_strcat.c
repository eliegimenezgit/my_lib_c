/*
** EPITECH PROJECT, 2018
** my_strcat.c
** File description:
** fonction_colle_two_strings
*/

#include "header.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len_dest = my_strlen(dest);

    while (src[i] != '\0') {
        dest[len_dest + i] = src[i];
        ++i;
    }
    return (dest);
}
