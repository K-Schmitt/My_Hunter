/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** copie un string au bout d'un string
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int size = 0;
    for (i = 0; dest[i] != '\0'; i++)
        size = i + 1;
    for (int y = 0; src[y] != '\0'; y++, size++)
        dest[size] = src[y];
    dest[size] = '\0';
    return (dest);
}
