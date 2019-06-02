/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** windows creator for rpg
*/
#include "proto.h"

sfRenderWindow *createWindow(int width, int height)
{
    sfRenderWindow *window;
    sfVideoMode mode = {width, height, 32};

    window = sfRenderWindow_create(mode, "Game", sfClose | sfFullscreen, NULL);
    return window;
}
