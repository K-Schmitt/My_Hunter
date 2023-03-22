/*
** EPITECH PROJECT, 2022
** init game
** File description:
** init game
*/

#include "game.h"
#include "./../my.h"
#include <stdlib.h>

void init_run(struct alll *all)
{
    all->perso.r = 1;
    all->perso.click = 0;
    all->perso.speed = 200;
    all->perso1.r = 1;
    all->perso1.speed = 200;
    all->perso1.click = 0;
    all->perso2.r = 1;
    all->perso2.speed = 200;
    all->perso2.click = 0;
    all->perso3.r = 1;
    all->perso3.speed = 200;
    all->perso3.click = 0;
}

void init_all_perso(struct alll *all)
{
    create_perso(&all->perso, "./lib/image/p.png", nscale(all, 4, 4));
    all->perso.aff = 1;
    create_perso(&all->perso1, "./lib/image/p.png", nscale(all, 4, 4));
    create_perso(&all->perso2, "./lib/image/p.png", nscale(all, 4, 4));
    create_perso(&all->perso3, "./lib/image/p.png", nscale(all, 4, 4));
    sfSprite_setPosition(all->perso.name, all->perso.pos);
    sfSprite_setPosition(all->perso1.name, all->perso1.pos);
    sfSprite_setPosition(all->perso2.name, all->perso2.pos);
    sfSprite_setPosition(all->perso3.name, all->perso3.pos);
}

void init_score(struct alll *all)
{
    CS(&all->scoresp, "./lib/image/scor.png", nscale(all, 5, 5), veci(64, 15));
    all->scoresp.pos = centre(all->scoresp, all, vecf(64, 15), veci(0, 0));
    all->scote.font = sfFont_createFromFile("./lib/image/pix.ttf");
    all->scote.text = sfText_create();
    sfText_setFont(all->scote.text, all->scote.font);
    sfText_setColor(all->scote.text, sfBlack);
    sfText_setScale(all->scote.text, nscale(all, 3, 3));
    sfText_setPosition(all->scote.text, vecf(16 * nscale(all, 10, 10).x, -30));
}

void run(struct alll *all)
{
    int press = 0;
    init_run(all);
    init_all_perso(all);
    init_score(all);
    srand(sfClock_getElapsedTime(all->Clockfp).microseconds);
    all->Clock = sfClock_create();
    while (sfRenderWindow_isOpen(aw)) {
        srand(rand());
        actuwindow(all);
        press = click_pause(press, all);
        if (press == 2) {
            break;
        }
        if (game(all) == 2)
            break;
    }
}
