/*
** EPITECH PROJECT, 2018
** my_putchar.c
** File description:
** fonction disp char
*/

#include <unistd.h>

void my_putchar(char const c)
{
    write(1, &c, 1);
}
