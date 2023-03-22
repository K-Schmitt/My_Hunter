/*
** EPITECH PROJECT, 2022
** gestion sprite
** File description:
** gestion sprite
*/

#include "game.h"
#include "./../my.h"
#include <stdlib.h>

sfSprite *create_sprite(struct stocksprite *bob, char *path, sfVector2f z,
sfVector2i t)
{
    sfTexture *texture = sfTexture_createFromFile(path, NULL);
    bob->name = sfSprite_create();
    bob->scale.x = z.x;
    bob->scale.y = z.y;
    bob->z = recti(0, 0, t.x, t.y);
    sfSprite_setTexture(bob->name, texture, sfTrue);
    sfSprite_setScale(bob->name, bob->scale);
    return (0);
}

sfSprite *create_perso(struct stocksprite *bob, char *path, sfVector2f z)
{
    sfTexture *texture = sfTexture_createFromFile(path, NULL);
    bob->name = sfSprite_create();
    bob->scale.x = z.x;
    bob->scale.y = z.y;
    bob->z = recti(0, 0, 32, 32);
    bob->pos.x = -120;
    bob->Clock = sfClock_create();
    bob->aff = 0;
    sfSprite_setPosition(bob->name, bob->pos);
    sfSprite_setTexture(bob->name, texture, sfTrue);
    sfSprite_setScale(bob->name, bob->scale);
    return (0);
}

int side2(struct stocksprite *bob, struct alll *all)
{
    if (bob->side == 0 && bob->speed < 0) {
        bob->speed *= (-1);
        bob->speed += 20;
        bob->pos.x = -120;
        bob->death = sfRenderWindow_getSize(aw).x + 64;
        return (0);
    } else if (bob->side == 0 && bob->speed > 0) {
        bob->speed += 20;
        bob->pos.x = -120;
        bob->death = sfRenderWindow_getSize(aw).x + 64;
    }
    return (0);
}

int side(struct stocksprite *bob, struct alll *all)
{
    all->click = 0;
    all->score++;
    int_to_char(all);
    bob->pos.y = (rand() % 500);
    bob->side = rand() % 2;
    if (bob->side == 1 && bob->speed > 0) {
        bob->pos.x = sfRenderWindow_getSize(aw).x + 84;
        bob->death = -64;
        bob->speed += 20;
        bob->speed *= (-1);
        return (0);
    } else if (bob->side == 1 && bob->speed < 0){
        bob->speed -= 20;
        bob->pos.x = sfRenderWindow_getSize(aw).x + 84;
        bob->death = -64;
        return (0);
    }
    side2(bob, all);
    return (0);
}

void actudraw(struct alll *all, struct stocksprite bob)
{
    sfSprite_setScale(bob.name, bob.scale);
    sfSprite_setTextureRect(bob.name, bob.z);
    sfSprite_setPosition(bob.name, bob.pos);
    sfRenderWindow_drawSprite(aw, bob.name, 0);
}
