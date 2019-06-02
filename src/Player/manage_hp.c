/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** HEALTH POINT
*/
#include "proto.h"

void display_hp(g_t *g_t)
{
    g_t->vec_t->pos_hpui.x = g_t->rec_t->view_rect.left + 20;
    g_t->vec_t->pos_hpui.y = g_t->rec_t->view_rect.top + 20;
    g_t->vec_t->pos_hpempty.x = g_t->vec_t->pos_hpui.x + 149;
    g_t->vec_t->pos_hpempty.y = g_t->vec_t->pos_hpui.y + 68;
    g_t->vec_t->pos_hpfull.y = g_t->vec_t->pos_hpui.y + 68;
    g_t->rec_t->hp_rect.width = (g_t->var->char_hp /
        g_t->var->hp_max) * 193;
    g_t->vec_t->pos_hpfull.x = g_t->vec_t->pos_hpempty.x;
    sfSprite_setTextureRect(g_t->sp_t->hpfull, g_t->rec_t->hp_rect);
    sfSprite_setPosition(g_t->sp_t->hp_ui, g_t->vec_t->pos_hpui);
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->hp_ui, NULL);
    sfSprite_setPosition(g_t->sp_t->hpempty, g_t->vec_t->pos_hpempty);
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->hpempty, NULL);
    sfSprite_setPosition(g_t->sp_t->hpfull, g_t->vec_t->pos_hpfull);
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->hpfull, NULL);
}