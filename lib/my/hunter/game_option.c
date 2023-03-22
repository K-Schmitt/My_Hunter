/*
** EPITECH PROJECT, 2022
** option menu
** File description:
** option menu
*/

#include "game.h"
#include "./../my.h"

void optinit_sprite(struct alll *all)
{
    CS(&all->fondu, "./lib/image/overlay1.png", vecf(1, 1), veci(1920, 1080));
    CS(&all->gra, "./lib/image/1920.png", nscale(all, 4, 4), veci(99, 41));
    all->gra.pos = centre(all->gra, all, vecf(99, 41), veci(0, 400));
    CS(&all->petit, "./lib/image/800.png", nscale(all, 4, 4), veci(99, 41));
    all->petit.pos = centre(all->petit, all, vecf(99, 41), veci(0, 0));
    CS(&all->back, "./lib/image/back.png", nscale(all, 10, 10), veci(39, 17));
    all->back.pos = centre(all->back, all, vecf(39, 17), veci(0, -400));
}

void draw_option(struct alll *all)
{
    draw_game(all);
    sfRenderWindow_drawSprite(aw, all->fondu.name, NULL);
    actudraw(all, all->gra);
    actudraw(all, all->petit);
    actudraw(all, all->back);
    actudraw(all, all->cible);
    sfRenderWindow_display(aw);
}

int option_menu(struct alll *all)
{
    optinit_sprite(all);
    while (sfRenderWindow_isOpen(aw)) {
        actuwindow(all);
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyEscape))
            break;
        click_1920(all);
        click_800(all);
        if (click_back(all) == 1)
            return (-1);
        draw_option(all);
    }
    return (0);
}

void click_perso2(struct alll *all)
{
    if (rectmouse(all, all->perso, 32, 32) == 1 && all->click == 1)
        side(&all->perso, all);
    if (rectmouse(all, all->perso1, 32, 32) == 1 && all->click == 1)
        side(&all->perso1, all);
    if (rectmouse(all, all->perso2, 32, 32) == 1 && all->click == 1)
        side(&all->perso2, all);
    if (rectmouse(all, all->perso3, 32, 32) == 1 && all->click == 1)
        side(&all->perso3, all);
}
