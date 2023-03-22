/*
** EPITECH PROJECT, 2022
** game over
** File description:
** game over
*/
#include "game.h"
#include "./../my.h"

void go_init_sprite(struct alll *all)
{
    CS(&all->Mbu, "./lib/image/pause_button.png",
    nscale(all, 10, 10), veci(39, 17));
    all->Mbu.pos = centre(all->Mbu, all, vecf(39, 17), veci(-400, 0));
    CS(&all->gameo, "./lib/image/game_over.png",
    nscale(all, 10, 10), veci(22, 16));
    all->gameo.pos = centre(all->gameo, all, vecf(39, 17), veci(500, 0));
}

void go_update_sprite(struct alll *all)
{
    all->gameo.scale = nscale(all, 10, 10);
    all->gameo.pos = centre(all->gameo, all, vecf(22, 16), veci(0, 425));
    all->scoresp.scale = nscale(all, 10, 10);
    all->scoresp.pos = centre(all->scoresp, all, vecf(64, 15), veci(0, 100));
    sfText_setScale(all->scote.text, nscale(all, 6, 6));
    sfText_setPosition(all->scote.text, vecf(sfSprite_getPosition
    (all->scoresp.name).x + 40 * nscale(all, 8, 8).x, sfSprite_getPosition
    (all->scoresp.name).y - 45.0 / (1080 / sfRenderWindow_getSize(aw).y)));
}

void draw_game_over(struct alll *all)
{
    sfRenderWindow_drawSprite(aw, all->fond.name, NULL);
    actudraw(all, all->scoresp);
    sfRenderWindow_drawText(aw, all->scote.text, NULL);
    actudraw(all, all->gameo);
    actudraw(all, all->Mbu);
    actudraw(all, all->cible);
    sfRenderWindow_display(aw);
}

void game_over(struct alll *all)
{
    go_init_sprite(all);
    while (sfRenderWindow_isOpen(aw)) {
        actuwindow(all);
        if (click_main(all) == 1) {
            break;
        }
        go_update_sprite(all);
        draw_game_over(all);
    }
}
