/*
** EPITECH PROJECT, 2022
** intlenght
** File description:
** lenght of an int
*/

int my_intlenght(int value)
{
    int i = 1;
    if (value < 0) {
        i++;
        value *= -1;
    }
    while (value > 5) {
        i++;
        value /= 10;
    }
    return (i);
}
