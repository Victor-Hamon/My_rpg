/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** main character of my_rpg
*/
#include "proto.h"

void anim_char(g_t *g_t)
{
    g_t->anim_t->time_char = sfClock_getElapsedTime(g_t->anim_t->clock_char);
    g_t->anim_t->sec_char = g_t->anim_t->time_char.microseconds / 10000.0;
    if (g_t->anim_t->sec_char > 8.0) {
        if (g_t->rec_t->rect_char.left <= 388)
            g_t->rec_t->rect_char.left =
            g_t->rec_t->rect_char.left + 100;
        if (g_t->rec_t->rect_char.left >= 388)
            g_t->rec_t->rect_char.left = 0;
        sfClock_restart(g_t->anim_t->clock_char);
    }
}

void anim_atk(g_t *g_t)
{
    g_t->anim_t->time_atk = sfClock_getElapsedTime(g_t->anim_t->clock_atk);
    g_t->anim_t->sec_atk = g_t->anim_t->time_atk.microseconds / 10000.0;
    if (g_t->anim_t->sec_atk > 12.0) {
        if (g_t->rec_t->atk_rect.left <= 356)
            g_t->rec_t->atk_rect.left =
            g_t->rec_t->atk_rect.left + 60;
        if (g_t->rec_t->atk_rect.left >= 356)
            g_t->rec_t->atk_rect.left = 0;
        sfClock_restart(g_t->anim_t->clock_atk);
    }
}

void display_character(g_t *g_t)
{
    sfVector2f origin;

    origin.x = 25;
    origin.y = 87;
    sfSprite_setTextureRect(g_t->sp_t->perso, g_t->rec_t->rect_char);
    sfSprite_setPosition(g_t->sp_t->perso, g_t->vec_t->pos_char);
    sfSprite_setOrigin(g_t->sp_t->perso, origin);
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->perso, NULL);
}