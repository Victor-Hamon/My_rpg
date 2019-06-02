/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** quest for rpg
*/
#include "proto.h"

void check_for_quest(g_t *g_t)
{
    if (g_t->var->curr_quest < 4) {
        sfSprite_setPosition(g_t->quests[g_t->var->curr_quest]->qsprite,
            g_t->quests[g_t->var->curr_quest]->pos_q);
        sfRenderWindow_drawSprite(g_t->w_t->w,
            g_t->quests[g_t->var->curr_quest]->qsprite, NULL);
        if (g_t->vec_t->pos_char.x >= g_t->quests[g_t->var->curr_quest]->
            pos_q.x - 30 && g_t->vec_t->pos_char.x <=
            g_t->quests[g_t->var->curr_quest]->pos_q.x + 30
            && g_t->vec_t->pos_char.y >= g_t->quests[g_t->var->curr_quest]->
            pos_q.y - 30 && g_t->vec_t->pos_char.y <=
            g_t->quests[g_t->var->curr_quest]->pos_q.y + 30) {
            g_t->var->curr_quest++;
        }
    }
}