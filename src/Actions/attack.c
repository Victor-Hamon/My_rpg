/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** attacks for rpg
*/
#include "proto.h"

bool attack_idle(void)
{
    int keym = 0;
    if (sfKeyboard_isKeyPressed(sfKeyM))
    keym = 1;
    while (keym) {
        if (!sfKeyboard_isKeyPressed(sfKeyM)) {
            return (true);
            keym = 0;
        }
    }
    return (false);
}

sfVector2f check2(g_t *g_t, boss *boss, sfVector2f center, sfVector2f posatk)
{
    if (g_t->rec_t->rect_char.top == 0) {
        posatk.x = g_t->vec_t->pos_char.x + 20;
        posatk.y = g_t->vec_t->pos_char.y + 120;
        (is_in_range(posatk, center, 350) == 1) ? boss->hp -= 0.4
        : 0;
        return(posatk);
    }
    return(posatk);
}

sfVector2f checkatk(g_t *g_t, boss *boss, sfVector2f center, sfVector2f posatk)
{
    posatk = check2(g_t, boss, center, posatk);
    if (g_t->rec_t->rect_char.top == 150) {
        posatk.x = g_t->vec_t->pos_char.x + 20;
        posatk.y = g_t->vec_t->pos_char.y - 80;
        (is_in_range(posatk, center, 350) == 1) ? boss->hp -= 0.4
        : 0;
        return(posatk);
    }
    if (g_t->rec_t->rect_char.top == 450) {
        posatk.y = g_t->vec_t->pos_char.y;
        posatk.x = g_t->vec_t->pos_char.x + 90;
        (is_in_range(posatk, center, 350) == 1) ? boss->hp -= 0.4
        : 0;
        return(posatk);
    }
    return(posatk);
}

void attack(g_t *g_t, boss *boss)
{
    sfVector2f posatk;
    sfVector2f center;

    anim_atk(g_t);
    sfSprite_setTextureRect(g_t->sp_t->atk, g_t->rec_t->atk_rect);
    center.x = 10348;
    center.y = 1450;
    if (sfKeyboard_isKeyPressed(sfKeyM)) {
        posatk = checkatk(g_t, boss, center, posatk);
        if (g_t->rec_t->rect_char.top == 300) {
            posatk.y = g_t->vec_t->pos_char.y;
            posatk.x = g_t->vec_t->pos_char.x - 60;
            (is_in_range(posatk, center, 350) == 1) ?
            boss->hp -= 0.4 : 0;
        }
    }
    sfSprite_setPosition(g_t->sp_t->atk, posatk);
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->atk, NULL);
}