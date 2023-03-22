/*
** EPITECH PROJECT, 2022
** my_find_prime_sup.c
** File description:
** trouver nombre primaire superieur
*/

int my_find_prime_sup(int nb)
{
    int i = 2;
    while (i != nb) {
        if (nb % i >= 1)
            i++;
        else
            nb++;
    }
    return (nb);
}
