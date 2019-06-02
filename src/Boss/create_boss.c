/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** boss for rpg
*/
#include "proto.h"

static void display_hpboss(boss *boss, g_t *g_t, sfVector2f center)
{
    (boss->status == 1) ? sfRenderWindow_drawCircleShape(g_t->w_t->w,
        boss->zone_poison1, NULL) : 0;
    (boss->status == 1 && is_in_range(g_t->vec_t->pos_char, center,
        boss->range_pat1) == 1) ? g_t->var->char_hp-- : 0;
    sfRenderWindow_drawCircleShape(g_t->w_t->w, boss->hitbox, NULL);
    boss->poshpui.x = g_t->rec_t->view_rect.left + 1085;
    boss->poshpui.y = g_t->rec_t->view_rect.top + 20;
    boss->poshp.x = boss->poshpui.x + 15;
    boss->poshp.y = boss->poshpui.y + 14;
    boss->hprect.width = (boss->hp / 200) * 580;
    sfSprite_setTextureRect(boss->hpfull, boss->hprect);
    sfSprite_setPosition(boss->hpui, boss->poshpui);
    sfRenderWindow_drawSprite(g_t->w_t->w, boss->hpui, NULL);
    sfSprite_setPosition(boss->hpempty, boss->poshp);
    sfRenderWindow_drawSprite(g_t->w_t->w, boss->hpempty, NULL);
    sfSprite_setPosition(boss->hpfull, boss->poshp);
    sfRenderWindow_drawSprite(g_t->w_t->w, boss->hpfull, NULL);
}

void create_boss(boss *boss, g_t *g_t)
{
    sfVector2f center;

    // if (g_t->var->curr_quest == 4) {
        boss->time_patern1 = sfClock_getElapsedTime(boss->clock_patern1);
        boss->sec_patern1 = boss->time_patern1.microseconds / 10000.0;
        center.x = 10348;
        center.y = 1450;
        sfCircleShape_setPosition(boss->zone_poison1, center);
        if (boss->sec_patern1 > 300.0) {
            sfClock_restart(boss->clock_patern1);
            if (boss->status == 1) {
                boss->status = 0;
            } else if (boss->status == 0) {
                boss->status = 1;
            }
        }
        display_hpboss(boss, g_t, center);
    // }
}
