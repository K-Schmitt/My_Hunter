/*
** EPITECH PROJECT, 2022
** game
** File description:
** game
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "game.h"
#include "./../my.h"
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>

int perso_death(struct alll *all)
{
    if (all->perso.side == 1 && all->perso.pos.x < all->perso.death)
        return (1);
    if (all->perso.side == 0 && all->perso.pos.x > all->perso.death)
        return (1);
    if (all->perso1.side == 1 && all->perso1.pos.x < all->perso1.death)
        return (1);
    if (all->perso1.side == 0 && all->perso1.pos.x > all->perso1.death)
        return (1);
    if (all->perso2.side == 1 && all->perso2.pos.x < all->perso2.death)
        return (1);
    if (all->perso2.side == 0 && all->perso2.pos.x > all->perso2.death)
        return (1);
    if (all->perso3.side == 1 && all->perso3.pos.x < all->perso3.death)
        return (1);
    if (all->perso3.side == 0 && all->perso3.pos.x > all->perso3.death)
        return (1);
    return (0);
}

void update_sprite(struct alll *all)
{
    all->perso.scale = nscale(all, 4, 4);
    all->perso1.scale = nscale(all, 4, 4);
    all->perso2.scale = nscale(all, 4, 4);
    all->perso3.scale = nscale(all, 4, 4);
    all->scoresp.scale = nscale(all, 5, 5);
    all->scoresp.pos = vecf(0, 0);
    all->click = 0;
    sfText_setScale(all->scote.text, nscale(all, 3, 3));
    sfText_setPosition(all->scote.text, vecf(40 * nscale(all, 4, 4).x, -30.0
    / (1080 / sfRenderWindow_getSize(aw).y)));
    int_to_char(all);
    sfText_setString(all->scote.text, all->chcore);
}

void move_perso(struct alll *all)
{
    if (all->perso.aff == 1)
        all->perso.pos.x += ((all->perso.speed / (1920.0 /
        sfRenderWindow_getSize(aw).x)) / all->fps);
    if (all->perso1.aff == 1)
        all->perso1.pos.x += ((all->perso1.speed / (1920.0 /
        sfRenderWindow_getSize(aw).x)) / all->fps);
    if (all->perso2.aff == 1)
        all->perso2.pos.x += ((all->perso2.speed / (1920.0 /
        sfRenderWindow_getSize(aw).x)) / all->fps);
    if (all->perso3.aff == 1)
        all->perso3.pos.x += ((all->perso3.speed / (1920.0 /
        sfRenderWindow_getSize(aw).x)) / all->fps);
}

void click_perso(struct alll *all)
{
    if (sfTrue == sfMouse_isButtonPressed(sfMouseLeft) && all->bnoclick == 1) {
        all->click = 1;
        all->bnoclick = 0;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyW) && all->wnoclick == 1) {
        all->click = 1;
        all->wnoclick = 0;
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyX) && all->xnoclick == 1) {
        all->click = 1;
        all->xnoclick = 0;
    }
    if (sfFalse == sfMouse_isButtonPressed(sfMouseLeft))
        all->bnoclick = 1;
    if (sfFalse == sfKeyboard_isKeyPressed(sfKeyW))
        all->wnoclick = 1;
    if (sfFalse == sfKeyboard_isKeyPressed(sfKeyX))
        all->xnoclick = 1;
    click_perso2(all);
}

int game(struct alll *all)
{
    if (sfClock_getElapsedTime(all->Clock).ms > sfSeconds(1 / all->fps).ms) {
        move_perso(all);
        click_perso(all);
        update_sprite(all);
        draw_game(all);
        sfRenderWindow_display(aw);
    }
    animate_all(all);
    level(all);
    if (perso_death(all) == 1) {
        game_over(all);
        return (2);
    }
    return (0);
}
