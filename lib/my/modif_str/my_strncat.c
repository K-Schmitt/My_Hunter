/*
** EPITECH PROJECT, 2022
** my_strncat.c
** File description:
** copie n carachtere d'une string dans une autre
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int size = 0;
    for (i = 0; dest[i] != '\0'; i++)
        size = i + 1;
    for (int y = 0; y != nb; y++) {
        dest[size] = src[y];
        size++;
    }
    dest[size] = '\0';
    return (dest);
}
