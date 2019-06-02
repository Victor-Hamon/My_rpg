/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** option menu for myrpg
*/
#include "proto.h"

void calc_color(g_t *g_t, sfVector2i pos_mouse)
{
    sfColor color = sfSprite_getColor(g_t->sp_t->perso);

    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (pos_mouse.y <= 825 && pos_mouse.y >= 775 && pos_mouse.x >= 17 &&
            pos_mouse.x <= 260) {
            color.r = pos_mouse.x - 17;
            g_t->vec_t->pos_r.x = 17 + color.r;
        }
        if (pos_mouse.y <= 875 && pos_mouse.y >= 825 && pos_mouse.x >= 17 &&
            pos_mouse.x <= 260) {
            color.g = pos_mouse.x - 17;
            g_t->vec_t->pos_g.x = 17 + color.g;
        }
        if (pos_mouse.y <= 925 && pos_mouse.y >= 875 && pos_mouse.x >= 17 &&
            pos_mouse.x <= 260) {
            color.b = pos_mouse.x - 17;
            g_t->vec_t->pos_b.x = 17 + color.b;
        }
    }
    sfSprite_setColor( g_t->sp_t->perso, color);
}

void display_sliders(g_t *g_t, sfVector2i pos_mouse)
{
    pos_mouse.x -= 25;
    calc_color(g_t, pos_mouse);
    sfSprite_setPosition(g_t->sp_t->r, g_t->vec_t->pos_r);
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->r, NULL);
    sfSprite_setPosition(g_t->sp_t->g, g_t->vec_t->pos_g);
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->g, NULL);
    sfSprite_setPosition(g_t->sp_t->b, g_t->vec_t->pos_b);
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->b, NULL);
}

int which_option(g_t *g_t, sfVector2i pos_mouse)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (pos_mouse.y <= 550 && pos_mouse.y >= 440 && pos_mouse.x >= 889 &&
            pos_mouse.x <= 1156) {
            g_t->rec_t->vol_rect.left = (pos_mouse.x - 889);
            g_t->vec_t->pos_vol.x = 889 + g_t->rec_t->vol_rect.left + 0.0f;
            g_t->var->gen_volume = 100 - g_t->rec_t->vol_rect.left / 2.67;
        }
        if (pos_mouse.y <= 840 && pos_mouse.y >= 780 && pos_mouse.x >= 660 &&
            pos_mouse.x <= 860)
            return (1);
    }
    return (0);
}

void display_choices(g_t *g_t)
{
    sfRenderWindow_setVerticalSyncEnabled(g_t->w_t->w, g_t->bool_t->vsync);
    sfMusic_setVolume(g_t->audio_t->menu_music, g_t->var->gen_volume);
    sfSprite_setTextureRect(g_t->sp_t->perso, g_t->rec_t->rect_char);
    sfSprite_setPosition(g_t->sp_t->perso, g_t->vec_t->pos_char_o_m);
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->o_m, NULL);
    sfSprite_setTextureRect(g_t->sp_t->yes_no, g_t->rec_t->yn_rect);
    sfSprite_setPosition(g_t->sp_t->yes_no, g_t->vec_t->pos_yn);
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->yes_no, NULL);
    sfSprite_setTextureRect(g_t->sp_t->vol, g_t->rec_t->vol_rect);
    sfSprite_setPosition(g_t->sp_t->vol, g_t->vec_t->pos_vol);
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->vol, NULL);
    sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->perso, NULL);
}

void display_option_menu(g_t *g_t)
{
    int choice = 0;
    sfEvent event;
    sfVector2i pos_mouse;

    while (choice == 0 && sfRenderWindow_isOpen(g_t->w_t->w)) {
        sfRenderWindow_pollEvent(g_t->w_t->w, &event);
        pos_mouse = sfMouse_getPositionRenderWindow(g_t->w_t->w);
        choice = which_option(g_t, pos_mouse);
        display_choices(g_t);
        display_sliders(g_t, pos_mouse);
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(g_t->w_t->w);
        sfRenderWindow_display(g_t->w_t->w);
        sfRenderWindow_clear(g_t->w_t->w, sfBlack);
    }
}