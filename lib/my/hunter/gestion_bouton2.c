/*
** EPITECH PROJECT, 2022
** gestion button
** File description:
** gestion button
*/

#include "game.h"
#include "./../my.h"


int click_1920(struct alll *all)
{
    if (rectmouse(all, all->gra, 99, 41) == 1) {
        all->gra.z.top = 41;
        if (sfTrue == sfMouse_isButtonPressed(sfMouseLeft) &&
        all->gra.scale.x == nscale(all, 4, 4).x) {
            all->gra.scale = nscale(all, 3.5, 3.5);
            sfSprite_setScale(all->gra.name, all->gra.scale);
            all->gra.pos = centre(all->gra, all, vecf(99, 41), veci(0, 400));
            return (1);
        }
        if (sfFalse == sfMouse_isButtonPressed(sfMouseLeft) &&
        all->gra.scale.x == nscale(all, 3.5, 3.5).x) {
            sfRenderWindow_setSize(all->window, vecu(1980, 1080));
            return (0);
        }
    } else {
        all->gra.z.top = 0;
        all->gra.scale = nscale(all, 4, 4);
        all->gra.pos = centre(all->gra, all, vecf(99, 41), veci(0, 400));
    }
    return (0);
}

int click_800(struct alll *all)
{
    if (rectmouse(all, all->petit, 99, 41) == 1) {
        all->petit.z.top = 41;
        if (sfTrue == sfMouse_isButtonPressed(sfMouseLeft) &&
        all->petit.scale.x == nscale(all, 4, 4).x) {
            all->petit.scale = nscale(all, 3.5, 3.5);
            sfSprite_setScale(all->petit.name, all->petit.scale);
            all->petit.pos = centre(all->petit, all, vecf(99, 41), veci(0, 0));
            return (0);
        }
        if (sfFalse == sfMouse_isButtonPressed(sfMouseLeft) &&
        all->petit.scale.x == nscale(all, 3.5, 3.5).x) {
            sfRenderWindow_setSize(all->window, vecu(800, 600));
            return (1);
        }
    } else {
        all->petit.z.top = 0;
        all->petit.scale = nscale(all, 4, 4);
        all->petit.pos = centre(all->petit, all, vecf(99, 41), veci(0, 0));
    }
    return (0);
}

int click_back(struct alll *all)
{
    if (rectmouse(all, all->back, 39, 17) == 1) {
        all->back.z.top = 17;
        if (sfTrue == sfMouse_isButtonPressed(sfMouseLeft) &&
        all->back.scale.x == nscale(all, 10, 10).x) {
            all->back.scale = nscale(all, 9, 9);
            sfSprite_setScale(all->back.name, all->back.scale);
            all->back.pos = centre(all->back, all, vecf(39, 17), veci(0, -400));
            return (0);
        }
        if (sfFalse == sfMouse_isButtonPressed(sfMouseLeft) &&
        all->back.scale.x == nscale(all, 9, 9).x) {
            return (1);
        }
    } else {
        all->back.z.top = 0;
        all->back.scale = nscale(all, 10, 10);
        all->back.pos = centre(all->back, all, vecf(39, 17), veci(0, -400));
    }
    return (0);
}

int descrip(char *str)
{
    if (str[0] == '-' && str[1] == 'h' && str[2] == '\0') {
        my_putstr("The objective of the game is to click on as many");
        my_putstr(" aliens as possible.\nClick the left mouse button or W or");
        my_putstr(" X to interact.\nspace or p to pause\n");
        my_putstr("esc to exit the pause and option menus.\n");
        return (1);
    }
    return (0);
}
