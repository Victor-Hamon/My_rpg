/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** vectors for rpg
*/
#include "proto.h"

vec_t *init_vector_2(vec_t *vec_t)
{
    vec_t->pos_char_o_m.x = 375;
    vec_t->pos_char_o_m.y = 850;
    vec_t->pos_vol.x = 889;
    vec_t->pos_vol.y = 445;
    vec_t->pos_yn.x = 92;
    vec_t->pos_yn.y = 275;
    vec_t->pos_loc2.x = 0;
    vec_t->pos_loc2.y = 275;
    vec_t->pos_hpui.x = 0;
    vec_t->pos_hpui.y = 0;
    vec_t->pos_hpfull.x = 0;
    vec_t->pos_hpfull.y = 0;
    vec_t->pos_hpempty.x = 0;
    vec_t->pos_hpempty.y = 0;
    return (vec_t);
}

vec_t *init_vector(void)
{
    vec_t *vec_t = malloc(sizeof(*vec_t));

    vec_t = init_vector_2(vec_t);
    vec_t->pos_quit.x = 1124;
    vec_t->pos_quit.y = 360;
    vec_t->pos_play.x = 270;
    vec_t->pos_play.y = 275;
    vec_t->pos_opt.x = 1295;
    vec_t->pos_opt.y = 767;
    vec_t->pos_char.x = 8500;
    vec_t->pos_char.y = 1600;
    vec_t->pos_r.x = 17;
    vec_t->pos_r.y = 800 - 32;
    vec_t->pos_g.x = 17;
    vec_t->pos_g.y = 850 - 32;
    vec_t->pos_b.x = 17;
    vec_t->pos_b.y = 900 - 32;
    return (vec_t);
}