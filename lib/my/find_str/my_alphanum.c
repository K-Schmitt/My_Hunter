/*
** EPITECH PROJECT, 2022
** alphanum
** File description:
** alphanum
*/

int alphanum(char const str)
{
    if ((str >= 48 && str <= 57) || (str >= 65 && str <= 90)) {
        return (1);
    } else if (str >= 97 && str <= 122){
        return (1);
    } else {
        return (0);
    }
}
