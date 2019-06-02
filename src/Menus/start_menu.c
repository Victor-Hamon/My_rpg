/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** start menu for rpg
*/
#include "proto.h"

void display_highlights(g_t *g_t, sfVector2i pos_mouse)
{
    if (pos_mouse.y <= 532 && pos_mouse.y >= 332 && pos_mouse.x >= 1100 &&
        pos_mouse.x <= 1400) {
        sfSprite_setPosition(g_t->sp_t->quit, g_t->vec_t->pos_quit);
        sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->quit, NULL);
    }
    if (pos_mouse.y >= 250 && pos_mouse.y <= 440 && pos_mouse.x >= 335 &&
        pos_mouse.x <= 440) {
        sfSprite_setPosition(g_t->sp_t->play, g_t->vec_t->pos_play);
        sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->play, NULL);
    }
    if (pos_mouse.y >= 744 && pos_mouse.y <= 1050 && pos_mouse.x >= 1330 &&
        pos_mouse.x <= 1800) {
        sfSprite_setPosition(g_t->sp_t->option, g_t->vec_t->pos_opt);
        sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->option, NULL);
    }
}

int which_choice(g_t *g_t, sfVector2i pos_mouse)
{
    if (click()) {
        if (pos_mouse.y <= 532 && pos_mouse.y >= 332 && pos_mouse.x >= 1100 &&
            pos_mouse.x <= 1400)
            sfRenderWindow_close(g_t->w_t->w);
        if (pos_mouse.y >= 41 && pos_mouse.y <= 390 && pos_mouse.x >= 335 &&
            pos_mouse.x <= 440) {
            return (1);
        }
        if (pos_mouse.y >= 744 && pos_mouse.y <= 1050 && pos_mouse.x >= 1330 &&
            pos_mouse.x <= 1800)
            display_option_menu(g_t);
    }
    return (0);
}

void display_trads(g_t *g_t, sfVector2i pos_mouse)
{
    sfColor color = sfSprite_getColor(g_t->sp_t->l_m);

    g_t->anim_t->time_layer = sfClock_getElapsedTime(g_t->anim_t->clock_layer);
    g_t->anim_t->sec_layer = g_t->anim_t->time_layer.microseconds / 10000.0;
    if (g_t->anim_t->sec_layer > 3.0) {
        if (color.a == 255 && g_t->var->offset == 1)
            g_t->var->offset = - 1;
        if (color.a == 0 && g_t->var->offset == - 1)
            g_t->var->offset = 1;
        color.a += g_t->var->offset;
        sfClock_restart(g_t->anim_t->clock_layer);
    }
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->s_m, NULL);
    display_highlights(g_t, pos_mouse);
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->l_m, NULL);
    sfSprite_setColor( g_t->sp_t->l_m, color);
}

void display_menu(g_t *g_t)
{
    int choice = 0;
    sfEvent event;
    sfVector2i pos_mouse;

    sfMusic_play(g_t->audio_t->menu_music);
    while (choice == 0 && sfRenderWindow_isOpen(g_t->w_t->w)) {
        sfRenderWindow_pollEvent(g_t->w_t->w, &event);
        sfMusic_setVolume(g_t->audio_t->menu_music, g_t->var->gen_volume);
        pos_mouse = sfMouse_getPositionRenderWindow(g_t->w_t->w);
        choice = which_choice(g_t, pos_mouse);
        display_trads(g_t, pos_mouse);
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(g_t->w_t->w);
        sfRenderWindow_display(g_t->w_t->w);
        sfRenderWindow_clear(g_t->w_t->w, sfBlack);
    }
    sfMusic_stop(g_t->audio_t->menu_music);
}