/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** lib functions for my_rpg
*/

#include "proto.h"

bool click(void)
{
    int click = 0;
    if (sfMouse_isButtonPressed(sfMouseLeft))
    click = 1;
    while (click) {
        if (!sfMouse_isButtonPressed(sfMouseLeft)) {
            return (true);
            click = 0;
        }
    }
    return (false);
}

bool is_click_true(void)
{
    int click = 0;
    if (sfMouse_isButtonPressed(sfMouseLeft) && click != 1)
        click = 1;
    while (click) {
        return (true);
    }
    return (false);
}

int is_in_range(sfVector2f pos_char, sfVector2f pos_boss, int range)
{
    int distance = 0;

    distance = pow((pos_char.x - pos_boss.x), 2) +
    pow((pos_char.y - pos_boss.y), 2);
    if (distance < pow(range, 2))
        return (1);
    return (0);
}
