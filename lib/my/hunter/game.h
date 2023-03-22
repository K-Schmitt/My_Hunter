/*
** EPITECH PROJECT, 2022
** game
** File description:
** game
*/

#pragma once
#include <SFML/Graphics.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/System/Clock.h>
#include <SFML/Audio.h>

#define CS create_sprite
#define AW all.window
#define aw all->window
#define ms microseconds
#define MB sfMouse_isButtonPressed

struct stocksprite {
    sfSprite *name;
    sfVector2f scale;
    sfVector2f pos;
    sfIntRect z;
    sfClock *Clock;
    float frame;
    float r;
    int click;
    int speed;
    float death;
    int side;
    int aff;
};

struct stocktext {
    sfFont *font;
    sfText *text;
};

struct alll {
    float fps;
    struct stocksprite fond;
    struct stocksprite fondu;
    struct stocksprite perso;
    struct stocksprite perso1;
    struct stocksprite perso2;
    struct stocksprite perso3;
    struct stocksprite Sbut;
    struct stocksprite Rbut;
    struct stocksprite Mbu;
    struct stocksprite Obut;
    struct stocksprite gameo;
    struct stocksprite scoresp;
    struct stocksprite gra;
    struct stocksprite petit;
    struct stocksprite back;
    struct stocksprite cible;
    struct stocktext scote;
    sfVector2f mouse;
    int click;
    int bnoclick;
    int wnoclick;
    int xnoclick;
    int noclick;
    sfRenderWindow *window;
    sfView *area;
    sfFloatRect size;
    sfEvent event;
    sfClock *Clock;
    sfClock *Clockfp;
    int score;
    char *chcore;
    int death;
    int fp;
};

int click_start(struct alll *all);
void closew(struct alll *all);
void actudraw(struct alll *all, struct stocksprite bob);
int pause_menu(struct alll *all);
void run(struct alll *all);
int click_pause(int press, struct alll *all);
int click_resume(struct alll *all);
int click_option(struct alll *all);
sfSprite *create_sprite(struct stocksprite *bob, char *path, sfVector2f z,
sfVector2i t);
sfIntRect recti(int l, int t, int w, int h);
sfFloatRect rectf(int l, int t, int w, int h);
sfVector2f vecf(float x, float y);
sfVector2i veci(float x, float y);
sfVector2u vecu(unsigned int x, unsigned int y);
void animate(struct stocksprite *bob, float x);
struct stocksprite clone(struct stocksprite *copy, struct stocksprite *bob);
void detect_fps(struct alll *all);
sfVector2f nscale(struct alll *all, float x, float y);
sfVector2f centre(struct stocksprite bob, struct alll *all, sfVector2f z,
sfVector2i e);
int rectmouse(struct alll *all, struct stocksprite bob, float x, float y);
void actuwindow(struct alll *all);
int side(struct stocksprite *bob, struct alll *all);
int click_main(struct alll *all);
sfSprite *create_perso(struct stocksprite *bob, char *path, sfVector2f z);
void int_to_char(struct alll *all);
void sizemin(struct sfRenderWindow *window);
void game_over(struct alll *all);
int option_menu(struct alll *all);
int game(struct alll *all);
void draw_game(struct alll *all);
void animate_all(struct alll *all);
void level(struct alll *all);
int click_1920(struct alll *all);
int click_800(struct alll *all);
int click_back(struct alll *all);
int descrip(char *str);
void click_perso2(struct alll *all);
