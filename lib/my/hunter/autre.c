/*
** EPITECH PROJECT, 2022
** autre
** File description:
** autre
*/

#include "game.h"
#include "./../my.h"

void animate(struct stocksprite *bob, float x)
{
    bob->frame = x;
    if ((sfClock_getElapsedTime(bob->Clock).ms) > (sfSeconds(1 / bob->frame).ms
    * bob->r)) {
        bob->z.left += 32;
        bob->r++;
    }
    if (bob->r > bob->frame) {
        bob->z.left = 0;
        bob->r = 1;
        sfClock_restart	(bob->Clock);
    }
}

void animate_all(struct alll *all)
{
    animate(&all->perso, 13);
    animate(&all->perso1, 13);
    animate(&all->perso2, 13);
    animate(&all->perso3, 13);
}

void int_to_char(struct alll *all)
{
    int x = all->score;
    all->chcore[2] = (x % 10) + 48;
    x = x / 10;
    all->chcore[1] = (x % 10) + 48;
    x = x / 10;
    all->chcore[0] = (x % 10) + 48;
    all->chcore[3] = '\0';
}

int rectmouse(struct alll *all, struct stocksprite bob, float x, float y)
{
    if (all->mouse.x >= sfSprite_getPosition(bob.name).x && all->mouse.x
    <= sfSprite_getPosition(bob.name).x + (x * sfSprite_getScale
    (bob.name).x) && (all->mouse.y >= sfSprite_getPosition(bob.name)
    .y && all->mouse.y <= sfSprite_getPosition(bob.name).y +
    (y * sfSprite_getScale(bob.name).y)))
        return (1);
    return (0);
}

void level(struct alll *all)
{
    if (all->score > 10) {
        all->perso1.aff = 1;
    }
    if (all->score > 20) {
        all->perso2.aff = 1;
    }
    if (all->score > 30) {
        all->perso3.aff = 1;
    }
}
