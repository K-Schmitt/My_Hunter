/*
** EPITECH PROJECT, 2022
** pause menu
** File description:
** pause menu
*/

#include "game.h"
#include "./../my.h"

void draw_game(struct alll *all)
{
    sfRenderWindow_drawSprite(aw, all->fond.name, NULL);
    actudraw(all, all->scoresp);
    sfRenderWindow_drawText(aw, all->scote.text, NULL);
    actudraw(all, all->perso);
    actudraw(all, all->perso1);
    actudraw(all, all->perso2);
    actudraw(all, all->perso3);
    actudraw(all, all->cible);
}

void init_sprite(struct alll *all)
{
    CS(&all->fondu, "./lib/image/overlay1.png", vecf(1, 1), veci(1920, 1080));
    CS(&all->Rbut, "./lib/image/resume_button.png", nscale(all, 10, 10),
    veci(39, 17));
    all->Rbut.pos = centre(all->Rbut, all, vecf(39, 17), veci(0, 400));
    CS(&all->Obut, "./lib/image/option_button.png", nscale(all, 10, 10),
    veci(39, 17));
    all->Obut.pos = centre(all->Obut, all, vecf(39, 17), veci(0, 0));
    CS(&all->Mbu, "./lib/image/pause_button.png", nscale(all, 10, 10),
    veci(39, 17));
    all->Mbu.pos = centre(all->Mbu, all, vecf(39, 17), veci(-400, 0));
}

void draw_pause(struct alll *all)
{
    draw_game(all);
    sfRenderWindow_drawSprite(aw, all->fondu.name, NULL);
    actudraw(all, all->Rbut);
    actudraw(all, all->Obut);
    actudraw(all, all->Mbu);
    actudraw(all, all->cible);
    sfRenderWindow_display(aw);
}

int pause_menu(struct alll *all)
{
    init_sprite(all);
    while (sfRenderWindow_isOpen(aw)) {
        actuwindow(all);
        if (click_resume(all) == 1)
            break;
        if (sfTrue == sfKeyboard_isKeyPressed(sfKeyEscape))
            break;
        click_option(all);
        if (click_main(all) == 1)
            return (-1);
        draw_pause(all);
    }
    return (0);
}
