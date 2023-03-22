/*
** EPITECH PROJECT, 2022
** convert_octa
** File description:
** convertie binaire en octa
*/

#include "../my.h"
char *convert_int2(int dec, int base, char *bob)
{
    int i = 0;
    while (dec > base - 1) {
        if ((dec % base) < 10)
            bob[i] = (char) ((dec % base) + 48);
        if ((dec % base) >= 10)
            bob[i] = (char) ((dec % base) + 55);
        dec /= base;
        i++;
    }
    if ((dec % base) < 10)
        bob[i] = (char) ((dec % base) + 48);
    if ((dec % base) >= 10)
        bob[i] = (char) ((dec % base) + 55);
    bob[i + 1] = '\0';
    return (my_revstr(bob));
}

char *convert_int(int dec, int base)
{
    int decc = dec;
    int i = 0;
    while (dec > base - 1) {
        dec /= base;
        i++;
    }
    i++;
    char bob[i];
    dec = decc;
    return (convert_int2(dec, base, bob));
}
