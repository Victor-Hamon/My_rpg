/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** Boss header for mydefender
*/
#ifndef BOSS_H_
#define BOSS_H_

typedef struct boss
{
    sfCircleShape *hitbox;
    sfCircleShape *zone_poison1;
    int range_pat1;
    sfIntRect hprect;
    sfTexture *hpui_text;
    sfTexture *hpfull_text;
    sfTexture *hpempty_text;
    sfSprite *hpui;
    sfSprite *hpfull;
    sfSprite *hpempty;
    sfVector2f poshpui;
    sfVector2f poshp;
    float hp;
    int status;
    sfTexture *text_boss;
    sfClock *clock_patern1;
    float sec_patern1;
    sfTime time_patern1;
}boss;

#endif /* BOSS_H_ */