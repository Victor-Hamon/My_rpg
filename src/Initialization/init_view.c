/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** view for my rpg
*/
#include "proto.h"

view_t *init_view(g_t *g_t)
{
    view_t *view_t = malloc(sizeof(*view_t));

    view_t->cam = sfView_createFromRect(g_t->rec_t->view_rect);
    return (view_t);
}