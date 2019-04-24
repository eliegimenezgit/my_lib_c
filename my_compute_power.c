/*
** EPITECH PROJECT, 2018
** my_compute_power.c
** File description:
** take nbr and expo
*/

#include "header.h"

int my_compute_power(int nb, int p)
{
    int result = 1;

    if (p > 0) {
        p = p - 1;
        result = nb * (my_compute_power(nb, p));
    }
    return (result);
}
