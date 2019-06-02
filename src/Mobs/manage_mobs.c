/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** mobs for rpg
*/
#include "proto.h"
#include "mobs.h"

void apply_pattern1(g_t *g_t, int i)
{
    if (g_t->mobs[i]->state == 0) {
        (g_t->mobs[i]->next_pos.x < g_t->mobs[i]->baspos.x +
            g_t->mobs[i]->pattern[0]) ? g_t->mobs[i]->next_pos.x +=
        g_t->mobs[i]->speed : g_t->mobs[i]->state++;
        return;
    }
    if (g_t->mobs[i]->state == 1) {
        (g_t->mobs[i]->next_pos.y < g_t->mobs[i]->baspos.y +
            g_t->mobs[i]->pattern[1]) ? g_t->mobs[i]->next_pos.y +=
        g_t->mobs[i]->speed : g_t->mobs[i]->state++;
        return;
    }
}

void apply_pattern(g_t *g_t, int i)
{
    apply_pattern1(g_t, i);
    if (g_t->mobs[i]->state == 2) {
        (g_t->mobs[i]->next_pos.x > g_t->mobs[i]->baspos.x -
            g_t->mobs[i]->pattern[2]) ? g_t->mobs[i]->next_pos.x -=
        g_t->mobs[i]->speed : g_t->mobs[i]->state++;
        return;
    }
    if (g_t->mobs[i]->state == 3) {
        (g_t->mobs[i]->next_pos.y > g_t->mobs[i]->baspos.y -
            g_t->mobs[i]->pattern[3]) ? g_t->mobs[i]->next_pos.y -=
        g_t->mobs[i]->speed : g_t->mobs[i]->state++;
        return;
    }
    if (g_t->mobs[i]->state == 4)
        g_t->mobs[i]->state = 0;
}

void display_mobs(g_t *g_t)
{
    for (int i = 0; i < NBMOB; i++) {
        apply_pattern(g_t, i);
        if (is_in_range(g_t->vec_t->pos_char, g_t->mobs[i]->next_pos, 80))
            g_t->var->char_hp--;
        sfSprite_setPosition(g_t->mobs[i]->sprite, g_t->mobs[i]->next_pos);
        sfRenderWindow_drawSprite(g_t->w_t->w, g_t->mobs[i]->sprite, NULL);
    }
}