/*
** EPITECH PROJECT, 2022
** gestion window
** File description:
** gestion window
*/
#include "game.h"
#include "./../my.h"
#include <stdlib.h>

void closew(struct alll *all)
{
    while (sfRenderWindow_pollEvent(aw, &all->event)) {
        if (all->event.type == sfEvtClosed)
            sfRenderWindow_close(aw);
    }
}

sfVector2f nscale(struct alll *all, float x, float y)
{
    sfVector2f b ;
    float xx = x / ((float)1980 / sfRenderWindow_getSize(aw).x);
    float yy = y / ((float)1080 / sfRenderWindow_getSize(aw).y);
    if (xx > yy) {
        b = vecf(yy, yy);
    } else {
        b = vecf(xx, xx);
    }
    return (b);
}

sfVector2f centre(struct stocksprite bob, struct alll *all, sfVector2f z,
sfVector2i e)
{
    sfVector2f b = sfRenderWindow_mapPixelToCoords(aw, veci(((
        sfRenderWindow_getSize(aw).x - e.x) / 2) - ((sfSprite_getScale
        (bob.name).x * z.x) / 2), ((sfRenderWindow_getSize(aw).y - e.y
        ) / 2)- ((sfSprite_getScale(bob.name).y * z.y) / 2)), all->area);
    return (b);
}

void actuwindow(struct alll *all)
{
    detect_fps(all);
    sizemin(aw);
    sfRenderWindow_clear(aw, sfWhite);
    all->size = rectf(0, 0, sfRenderWindow_getSize(aw).x,
    sfRenderWindow_getSize(aw).y);
    all->area = sfView_createFromRect(all->size);
    all->mouse = sfRenderWindow_mapPixelToCoords(aw,
    sfMouse_getPositionRenderWindow(aw), all->area);
    all->cible.pos.x = all->mouse.x - (32 * nscale(all, 2.5, 2.5).x) / 2;
    all->cible.pos.y = all->mouse.y - (32 * nscale(all, 2.5, 2.5).y) / 2;
    sfRenderWindow_setView(aw, all->area);
    closew(all);
}

void sizemin(struct sfRenderWindow *window)
{
    if (sfRenderWindow_getSize(window).x <= 700) {
        sfRenderWindow_setSize(window, vecu(700,
        sfRenderWindow_getSize(window).y));
    }
    if (sfRenderWindow_getSize(window).y <= 500) {
        sfRenderWindow_setSize(window, vecu(sfRenderWindow_getSize(window).x,
        500));
    }
}
