/*
** EPITECH PROJECT, 2022
** my_is_prime.c
** File description:
** nombre premier
*/

int my_is_prime(int nb)
{
    for (int i = 2; i != nb; i++)
        if (nb % i < 1)
            return (0);
    return (1);
}
