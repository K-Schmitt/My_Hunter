/*
** EPITECH PROJECT, 2022
** alphanum
** File description:
** alphanum
*/

int alphab(char const str)
{
    if ((str >= 97 && str <= 122) || (str >= 65 && str <= 90)) {
        return (1);
    } else {
        return (0);
    }
}
