/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** rpg launcher
*/
#include "proto.h"

static void intro(g_t *g_t)
{
    display_menu(g_t);
    display_prologue(g_t);
    display_scenario(g_t);
    sfMusic_play(g_t->audio_t->menu_music);
}

static void display(g_t *g_t)
{
    display_character(g_t);
    display_mobs(g_t);
    display_quest(g_t);
    display_hp(g_t);
}

void rpg(g_t *g_t, boss *boss)
{
    sfEvent event;

    intro(g_t);
    while (sfRenderWindow_isOpen(g_t->w_t->w)) {
        sfRenderWindow_setFramerateLimit(g_t->w_t->w, 30);
        display_map(g_t);
        check_for_quest(g_t);
        create_boss(boss, g_t);
        attack(g_t, boss);
        display(g_t);
        move_char(g_t);
        sfRenderWindow_display(g_t->w_t->w);
        sfRenderWindow_clear(g_t->w_t->w, sfBlack);
        check_for_ending(g_t, boss);
        sfRenderWindow_pollEvent(g_t->w_t->w, &event);
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(g_t->w_t->w);
    }
    return;
}