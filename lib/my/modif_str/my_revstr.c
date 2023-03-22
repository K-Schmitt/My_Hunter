/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** reverse string
*/

#include "../my.h"
#include <stdio.h>
#include <stdlib.h>

char *my_revstr(char *src)
{
    int size = my_strlen(src) - 1;
    char *dest = malloc(sizeof(char) * (size + 2));
    int i = 0;
    for (; src[i] != '\0'; i++) {
        dest[i] = src[size];
        size--;
    }
    dest[i] = '\0';
    return (dest);
}
