/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** moves for rpg
*/
#include "proto.h"

void move_up(g_t *g_t)
{
    g_t->rec_t->rect_char.top = 150;
    anim_char(g_t);
    if (g_t->vec_t->pos_char.y - 15 > 0 && g_t->arr_t->coll_map[(int)
        (g_t->vec_t->pos_char.y - 51) / 102][(int) g_t->vec_t->pos_char.x /
        102] != '2')
        g_t->vec_t->pos_char.y -= 15;
    if (g_t->vec_t->pos_char.y > g_t->rec_t->view_rect.top + 500)
        return;
    if (g_t->rec_t->view_rect.top - 15 > 0 && g_t->arr_t->coll_map[(int)
        (g_t->vec_t->pos_char.y - 51) / 102][(int) g_t->vec_t->pos_char.x /
        102] != '2')
        g_t->rec_t->view_rect.top -= 15;
}

void move_down(g_t *g_t)
{
    g_t->rec_t->rect_char.top = 0;
    anim_char(g_t);
    if (g_t->vec_t->pos_char.y + 15 < 15772 && g_t->arr_t->coll_map[(int)
        (g_t->vec_t->pos_char.y) / 102][(int) g_t->vec_t->pos_char.x / 102]
        != '2')
        g_t->vec_t->pos_char.y += 15;
    if (g_t->vec_t->pos_char.y < g_t->rec_t->view_rect.top + 500)
        return;
    if (g_t->rec_t->view_rect.top + 15 < 15872 - 1080 &&
        g_t->arr_t->coll_map[(int) (g_t->vec_t->pos_char.y) / 102][(int)
            g_t->vec_t->pos_char.x / 102] != '2')
        g_t->rec_t->view_rect.top += 15;
}

void move_right(g_t *g_t)
{
    g_t->rec_t->rect_char.top = 450;
    anim_char(g_t);
    if (g_t->vec_t->pos_char.x + 15 < 11164 && g_t->arr_t->coll_map[(int)
        (g_t->vec_t->pos_char.y - 10)/ 102][(int) (g_t->vec_t->pos_char.x +
            51)/ 102] != '2')
        g_t->vec_t->pos_char.x += 15;
    if (g_t->vec_t->pos_char.x < g_t->rec_t->view_rect.left + 800)
        return;
    if (g_t->rec_t->view_rect.left + 15 < 11264 - 1920 &&
        g_t->arr_t->coll_map[(int) (g_t->vec_t->pos_char.y - 10) /
            102][(int) (g_t->vec_t->pos_char.x + 51)/ 102] != '2')
        g_t->rec_t->view_rect.left += 15;
}

void move_left(g_t *g_t)
{
    g_t->rec_t->rect_char.top = 300;
    anim_char(g_t);
    if (g_t->vec_t->pos_char.x - 15 > 0 && g_t->arr_t->coll_map[(int)
        (g_t->vec_t->pos_char.y - 10)/ 102][(int) (g_t->vec_t->pos_char.x
            - 51)/ 102] != '2')
        g_t->vec_t->pos_char.x -= 15;
    if (g_t->vec_t->pos_char.x > g_t->rec_t->view_rect.left + 800)
        return;
    if (g_t->rec_t->view_rect.left - 15 > 0 && g_t->arr_t->coll_map[(int)
        (g_t->vec_t->pos_char.y - 10)/ 102][(int) (g_t->vec_t->pos_char.x
            - 51) / 102] != '2')
        g_t->rec_t->view_rect.left -= 15;
}

void move_char(g_t *g_t)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        move_up(g_t);
        return;
    }
    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        move_down(g_t);
        return;
    }
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        move_right(g_t);
        return;
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        move_left(g_t);
        return;
    }
    g_t->rec_t->rect_char.left = 0;
}