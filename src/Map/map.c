/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** map manager for myrpg
*/
#include "proto.h"

void display_map(g_t *g_t)
{
    g_t->view_t->cam = sfView_createFromRect(g_t->rec_t->view_rect);
    sfRenderWindow_setView(g_t->w_t->w, g_t->view_t->cam);
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->carte, NULL);
}