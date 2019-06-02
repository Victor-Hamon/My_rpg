/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** booleans for my_rpg
*/
#include "proto.h"

bool_t *init_booleans(void)
{
    bool_t *bool_t = malloc(sizeof(*bool_t));

    bool_t->vsync = false;
    return (bool_t);
}