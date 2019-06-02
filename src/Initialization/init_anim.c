/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** animation clocks for rpg
*/
#include "proto.h"

anim_t *init_anim(void)
{
    anim_t *anim_t = malloc(sizeof(*anim_t));

    anim_t->clock_char = sfClock_create();
    anim_t->clock_atk = sfClock_create();
    anim_t->clock_layer = sfClock_create();
    return (anim_t);
}