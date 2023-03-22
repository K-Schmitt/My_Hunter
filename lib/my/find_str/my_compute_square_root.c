/*
** EPITECH PROJECT, 2022
** my_compute_square_root.c
** File description:
** racine carré
*/

int my_compute_square_root(int nb)
{
    int result = 1 ;
    int t = 1;
    if (nb <= 0)
        return (0);
    if (nb == 1)
        return (1);
    while (result != nb) {
        t++;
        result = t * t;
        if (result > nb)
            return (0);
    }
        return (t);
}
