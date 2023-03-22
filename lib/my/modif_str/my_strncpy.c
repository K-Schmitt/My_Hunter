/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** copie n caractere
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i != n; i++)
        dest[i] = src[i];
    return (dest);
}
