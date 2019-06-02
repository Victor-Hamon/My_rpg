/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** ending for rpg
*/
#include "proto.h"
#include "credits.h"

void reset_view(g_t *g_t)
{
    sfFloatRect base;
    base.top = 0;
    base.left = 0;
    base.height = 1080;
    base.width = 1920;
    sfView_reset(g_t->view_t->cam, base);
    sfRenderWindow_setView(g_t->w_t->w, g_t->view_t->cam);
}

bool respect(void)
{
    int f = 0;
    if (sfKeyboard_isKeyPressed(sfKeyF))
    f = 1;
    while (f) {
        if (!sfKeyboard_isKeyPressed(sfKeyF)) {
            return (true);
            f = 0;
        }
    }
    return (false);
}

void good_ending(g_t *g_t)
{
    sfText *credits = sfText_create();;
    sfVector2f pos;

    pos.y = 1200;
    pos.x = 550;
    reset_view(g_t);
    sfText_setString(credits, credit);
    sfText_setFont(credits, g_t->text->font);
    sfText_setFillColor(credits, sfWhite);
    sfText_setCharacterSize(credits, 75);
    while (pos.y > -2225) {
        pos.y--;
        sfText_setPosition(credits, pos);
        sfRenderWindow_clear(g_t->w_t->w, sfBlack);
        sfRenderWindow_drawText(g_t->w_t->w, credits, NULL);
        sfRenderWindow_display(g_t->w_t->w);
    }
    sfRenderWindow_close(g_t->w_t->w);
    return;
}

void bad_ending(g_t *g_t)
{
    sfText *loose = sfText_create();;
    sfVector2f pos;

    pos.y = 200;
    pos.x = 300;
    reset_view(g_t);
    sfText_setString(loose, "   YOU LOST\nPRESS F TO EXIT");
    sfText_setFont(loose, g_t->text->font);
    sfText_setFillColor(loose, sfRed);
    sfText_setCharacterSize(loose, 175);
    sfText_setPosition(loose, pos);
    while (!respect()) {
        sfRenderWindow_clear(g_t->w_t->w, sfBlack);
        sfRenderWindow_drawText(g_t->w_t->w, loose, NULL);
        sfRenderWindow_display(g_t->w_t->w);
    }
    sfRenderWindow_close(g_t->w_t->w);
    return;
}

void check_for_ending(g_t *g_t, boss *boss)
{
    if (g_t->var->char_hp <= 0)
        bad_ending(g_t);
    if (boss->hp <= 0)
        good_ending(g_t);
    return;
}
