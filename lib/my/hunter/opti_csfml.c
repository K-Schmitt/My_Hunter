/*
** EPITECH PROJECT, 2022
** opti csfml
** File description:
** opti
*/

#include "game.h"
#include "./../my.h"

sfIntRect recti(int l, int t, int w, int h)
{
    sfIntRect z;
    z.left = l;
    z.top = t;
    z.width = w;
    z.height = h;
    return (z);
}

sfFloatRect rectf(int l, int t, int w, int h)
{
    sfFloatRect z;
    z.left = l;
    z.top = t;
    z.width = w;
    z.height = h;
    return (z);
}

sfVector2f vecf(float x, float y)
{
    sfVector2f z;
    z.x = x;
    z.y = y;
    return (z);
}

sfVector2i veci(float x, float y)
{
    sfVector2i z;
    z.x = x;
    z.y = y;
    return (z);
}

sfVector2u vecu(unsigned int x, unsigned int y)
{
    sfVector2u z;
    z.x = x;
    z.y = y;
    return (z);
}
