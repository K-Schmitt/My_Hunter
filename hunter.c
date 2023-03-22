/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** main hunter
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include "game.h"


void detect_fps(struct alll *all)
{
    all->fp++;
    if (sfClock_getElapsedTime(all->Clockfp).ms > sfSeconds(0.5).ms) {
        sfClock_restart(all->Clockfp);
        all->fps = (all->fp * 2);
        all->fp = 0;
    }
}

void init(struct alll *all)
{
    all->score = 0;
    all->death = 0;
    all->perso1.aff = 0;
    all->perso2.aff = 0;
    all->perso3.aff = 0;
    all->perso.death = 1984;
    all->perso.side = 0;
    all->perso1.death = 1984;
    all->perso1.side = 0;
    all->perso2.death = 1984;
    all->perso2.side = 0;
    all->perso3.death = 1984;
    all->perso3.side = 0;
}

void init_sprite_main(struct alll *all)
{
    sfVideoMode mode = {1920, 1080, 64};
    CS(&all->fond, "./lib/image/fond.png", vecf(1, 1), veci(1921, 1080));
    CS(&all->Sbut, "./lib/image/start_button.png", vecf(5, 5), veci(39, 17));
    CS(&all->cible, "./lib/image/cible.png", vecf(2.5, 2.5), veci(32, 32));
    aw = sfRenderWindow_create(mode, "My hunter", sfResize | sfClose, 0);
    all->Clockfp = sfClock_create();
    all->chcore = malloc(sizeof(char) * (3));
}

void hunter(void)
{
    struct alll all;
    init_sprite_main(&all);
    sfRenderWindow_setFramerateLimit(AW, 100);
    while (sfRenderWindow_isOpen(AW)) {
        init(&all);
        actuwindow(&all);
        click_start(&all);
        sfRenderWindow_drawSprite(AW, all.fond.name, 0);
        actudraw(&all, all.Sbut);
        actudraw(&all, all.cible);
        sfRenderWindow_display(AW);
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
        if (descrip(argv[1]) == 1)
            return (0);
    hunter();
}
