/*
** EPITECH PROJECT, 2022
** gestion button
** File description:
** gestion button
*/

#include "game.h"
#include "./../my.h"


int click_start(struct alll *all)
{
    if (rectmouse(all, all->Sbut, 39, 17) == 1) {
        all->Sbut.z.top = 17;
        if (sfTrue == sfMouse_isButtonPressed(sfMouseLeft) &&
        all->Sbut.scale.x == nscale(all, 10, 10).x) {
            all->Sbut.scale = nscale(all, 9, 9);
            sfSprite_setScale(all->Sbut.name, all->Sbut.scale);
            all->Sbut.pos = centre(all->Sbut, all, vecf(39, 17), veci(0, 0));
            return (1);
        }
        if (sfFalse == sfMouse_isButtonPressed(sfMouseLeft) &&
        all->Sbut.scale.x == nscale(all, 9, 9).x) {
            run(all);
            return (0);
        }
    } else {
        all->Sbut.z.top = 0;
        all->Sbut.scale = nscale(all, 10, 10);
        all->Sbut.pos = centre(all->Sbut, all, vecf(39, 17), veci(0, 0));
    }
    return (0);
}

int click_pause(int press, struct alll *all)
{
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeyP) && press == 0) {
        if (pause_menu(all) == -1)
            return (2);
        return (1);
    }
    if (sfTrue == sfKeyboard_isKeyPressed(sfKeySpace) && press == 0) {
        if (pause_menu(all) == -1)
            return (2);
        return (1);
    }
    if (sfFalse == sfKeyboard_isKeyPressed(sfKeyP) && press == 1) {
        return (0);
    }
    if (sfFalse == sfKeyboard_isKeyPressed(sfKeySpace) && press == 1) {
        return (0);
    }
    return (press);
}

int click_resume(struct alll *all)
{
    if (rectmouse(all, all->Rbut, 39, 17) == 1) {
        all->Rbut.z.top = 17;
        if (sfTrue == sfMouse_isButtonPressed(sfMouseLeft) &&
        all->Rbut.scale.x == nscale(all, 10, 10).x) {
            all->Rbut.scale = nscale(all, 9, 9);
            sfSprite_setScale(all->Rbut.name, all->Rbut.scale);
            all->Rbut.pos = centre(all->Rbut, all, vecf(39, 17), veci(0, 400));
            return (0);
        }
        if (sfFalse == sfMouse_isButtonPressed(sfMouseLeft) &&
        all->Rbut.scale.x == nscale(all, 9, 9).x) {
            return (1);
        }
    } else {
        all->Rbut.z.top = 0;
        all->Rbut.scale = nscale(all, 10, 10);
        all->Rbut.pos = centre(all->Rbut, all, vecf(39, 17), veci(0, 400));
    }
    return (0);
}

int click_option(struct alll *all)
{
    if (rectmouse(all, all->Obut, 39, 17) == 1) {
        all->Obut.z.top = 17;
        if (sfTrue == sfMouse_isButtonPressed(sfMouseLeft) &&
        all->Obut.scale.x == nscale(all, 10, 10).x) {
            all->Obut.scale = nscale(all, 9, 9);
            sfSprite_setScale(all->Obut.name, all->Obut.scale);
            all->Obut.pos = centre(all->Obut, all, vecf(39, 17), veci(0, 0));
            return (0);
        }
        if (sfFalse == sfMouse_isButtonPressed(sfMouseLeft) &&
        all->Obut.scale.x == nscale(all, 9, 9).x) {
            option_menu(all);
            return (1);
        }
    } else {
        all->Obut.z.top = 0;
        all->Obut.scale = nscale(all, 10, 10);
        all->Obut.pos = centre(all->Obut, all, vecf(39, 17), veci(0, 0));
    }
    return (0);
}

int click_main(struct alll *all)
{
    if (rectmouse(all, all->Mbu, 39, 17) == 1) {
        all->Mbu.z.top = 17;
        if (sfTrue == sfMouse_isButtonPressed(sfMouseLeft) &&
        all->Mbu.scale.x == nscale(all, 10, 10).x) {
            all->Mbu.scale = nscale(all, 9, 9);
            sfSprite_setScale(all->Mbu.name, all->Mbu.scale);
            all->Mbu.pos = centre(all->Mbu, all, vecf(39, 17), veci(0, -400));
            return (0);
        }
        if (sfFalse == sfMouse_isButtonPressed(sfMouseLeft) &&
        all->Mbu.scale.x == nscale(all, 9, 9).x) {
            return (1);
        }
    } else {
        all->Mbu.z.top = 0;
        all->Mbu.scale = nscale(all, 10, 10);
        all->Mbu.pos = centre(all->Mbu, all, vecf(39, 17), veci(0, -400));
    }
    return (0);
}
