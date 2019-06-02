/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** scenario for my rpg
*/
#include "proto.h"
#include "story.h"

void display_scenario(g_t *g_t)
{
    int i = 0;

    sfRenderWindow_setFramerateLimit(g_t->w_t->w, 30);
    while (scenario[i] != NULL) {
        sfRenderWindow_clear(g_t->w_t->w, sfBlack);
        sfText_setString(g_t->text->curr_text, scenario[i]);
        sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->bgpro, NULL);
        sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->dia_box, NULL);
        sfRenderWindow_drawText(g_t->w_t->w, g_t->text->curr_text, NULL);
        sfRenderWindow_display(g_t->w_t->w);
        if (skip_dia())
            i++;
    }
}