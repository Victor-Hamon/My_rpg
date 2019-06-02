/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** main for my_rpg
*/
#include "proto.h"
#include "boss.h"

int main(int ac, __attribute__((unused))char *av[])
{
    g_t *g_t;
    boss *boss;
    if (ac != 1)
        return (84);
    boss = init_boss();
    g_t = init_game_struct();
    rpg(g_t, boss);
    return 0;
}