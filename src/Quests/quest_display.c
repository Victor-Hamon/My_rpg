/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** display the current quest
*/
#include "proto.h"

void display_quest(g_t *g_t)
{
    sfVector2f pos;

    if (g_t->var->curr_quest < 4) {
        pos.y = g_t->rec_t->view_rect.top + 50;
        pos.x = g_t->rec_t->view_rect.left + 400;
        sfText_setPosition(g_t->text->curr_qname, pos);
        sfText_setString(g_t->text->curr_qname,
            g_t->quests[g_t->var->curr_quest]->name);
        sfRenderWindow_drawText(g_t->w_t->w, g_t->text->curr_qname, NULL);
    } else {
        pos.y = g_t->rec_t->view_rect.top + 20;
        pos.x = g_t->rec_t->view_rect.left + 200;
        sfText_setPosition(g_t->text->curr_qname, pos);
        sfText_setString(g_t->text->curr_qname, "Now, kill Athreus");
        sfRenderWindow_drawText(g_t->w_t->w, g_t->text->curr_qname, NULL);
    }
}