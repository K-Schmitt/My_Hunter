/*
** EPITECH PROJECT, 2022
** my_strcpy.C
** File description:
** copie une chaine dans une autre
*/
void my_putchar(char c);
char *my_strcpy(char *dest, char const *src)
{
    int y;
    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
        y = i;
    }
    dest[y] = '\0';
    return (dest);
}
