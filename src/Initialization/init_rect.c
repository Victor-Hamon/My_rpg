/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** rect for my_rpg
*/
#include "proto.h"

void init_rect1(rec_t *rec_t)
{
    rec_t->rect_char.top = 0;
    rec_t->rect_char.left = 0;
    rec_t->rect_char.width = 100;
    rec_t->rect_char.height = 148;
    rec_t->view_rect.left = 8000;
    rec_t->view_rect.top = 1260;
    rec_t->view_rect.width = 1920;
    rec_t->view_rect.height = 1080;
    rec_t->vol_rect.top = 0;
    rec_t->vol_rect.left = 0;
    rec_t->vol_rect.width = 1920;
    rec_t->vol_rect.height = 1080;
    rec_t->yn_rect.top = 0;
}

rec_t *init_rect(void)
{
    rec_t *rec_t = malloc(sizeof(*rec_t));

    init_rect1(rec_t);
    rec_t->yn_rect.left = 0;
    rec_t->yn_rect.width = 70;
    rec_t->yn_rect.height = 67;
    rec_t->hp_rect.top = 0;
    rec_t->hp_rect.left = 0;
    rec_t->hp_rect.width = 193;
    rec_t->hp_rect.height = 47;
    rec_t->atk_rect.top = 0;
    rec_t->atk_rect.left = 0;
    rec_t->atk_rect.width = 60;
    rec_t->atk_rect.height = 119;
    return (rec_t);
}