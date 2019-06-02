/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** texts for potential dialogues
*/
#include "proto.h"

void init_quest_text(text_t *text_t, g_t *g_t)
{
    sfVector2f pos;

    pos.y = g_t->rec_t->view_rect.top;
    pos.x = g_t->rec_t->view_rect.left + 600;
    text_t->curr_qname = sfText_create();
    sfText_setFont(text_t->curr_qname, text_t->font);
    sfText_setPosition(text_t->curr_qname, pos);
    sfText_setFillColor(text_t->curr_qname, sfWhite);
    sfText_setCharacterSize(text_t->curr_qname, 75);
}

text_t *init_text(g_t *g_t)
{
    sfVector2f pos;

    pos.y = 850;
    pos.x = 35;
    text_t *text_t = malloc(sizeof(*text_t));

    text_t->font = sfFont_createFromFile("Assets/fonts/BlackCastleMF.ttf");
    text_t->curr_text = sfText_create();
    sfText_setFont(text_t->curr_text, text_t->font);
    sfText_setPosition(text_t->curr_text, pos);
    sfText_setFillColor(text_t->curr_text, sfBlack);
    sfText_setCharacterSize(text_t->curr_text, 75);
    init_quest_text(text_t, g_t);
    return (text_t);
}