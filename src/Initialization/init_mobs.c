/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** init mobs for rpg
*/
#include "proto.h"
#include "mobs.h"

mob **create_mobs( __attribute__((unused))g_t *g_t)
{
    mob **mobs = malloc(sizeof(**mobs) * NBMOB);

    for (int i = 0; i < NBMOB; ++i) {
        mobs[i] = malloc(sizeof(*mobs[i]));
        mobs[i]->baspos.x = my_getnbr(entities[i][0]);
        mobs[i]->baspos.y = my_getnbr(entities[i][1]);
        mobs[i]->next_pos.x = my_getnbr(entities[i][0]);
        mobs[i]->next_pos.y = my_getnbr(entities[i][1]);
        mobs[i]->hp = my_getnbr(entities[i][2]);
        mobs[i]->damage = my_getnbr(entities[i][3]);
        mobs[i]->text = sfTexture_createFromFile(entities[i][4], NULL);
        mobs[i]->sprite = sfSprite_create();
        sfSprite_setTexture(mobs[i]->sprite, mobs[i]->text, sfFalse);
        mobs[i]->pattern = pattern[i];
        mobs[i]->state = 0;
        mobs[i]->speed = 20;
    }
    return (mobs);
}