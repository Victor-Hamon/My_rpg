/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** variables for my_rpg
*/
#include "proto.h"

var_t *init_variables(void)
{
    var_t *var = malloc(sizeof(*var));

    var->offset = 1;
    var->offset_2 = 1;
    var->gen_volume = 100;
    var->release = 0;
    var->ind_it = 0;
    var->holding = 0;
    var->char_hp = 1000;
    var->hp_max = 1000;
    var->curr_quest = 0;
    return (var);
}