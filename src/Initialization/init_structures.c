/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** functions initializing the structures for rpg
*/
#include "proto.h"

g_t *init_game_struct(void)
{
    g_t *g_t = malloc(sizeof(*g_t));

    g_t->w_t = malloc(sizeof(*g_t->w_t));
    g_t->w_t->w = createWindow(1920, 1080);
    g_t->sp_t = initialize_sprites();
    g_t->audio_t = init_audio();
    g_t->vec_t = init_vector();
    g_t->anim_t = init_anim();
    g_t->rec_t = init_rect();
    g_t->view_t = init_view(g_t);
    g_t->var = init_variables();
    g_t->text = init_text(g_t);
    g_t->bool_t = init_booleans();
    g_t->quests = init_quests();
    g_t->arr_t = get_map();
    g_t->mobs = create_mobs(g_t);
    return (g_t);
}