/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** des
*/
#include "../my.h"
#include <unistd.h>

int my_put_nbr(int nb)
{
    long a = nb;
    int i = 0;
    if (a == 0) {
        my_putchar(0);
        return (1);
    }
    if (a < 0) {
        my_putchar('-');
        a = a * (-1);
        i++;
    }
    if (a > 9) {
        i += my_put_nbr(a / 10);
    }
    my_putchar(a % 10 + 48);
    i++;
    return (i);
}
