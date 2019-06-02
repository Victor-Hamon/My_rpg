/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** init boss
*/
#include "proto.h"

void init_pat1(boss *boss)
{
    sfVector2f scale;

    scale.x = 600;
    scale.y = 600;
    boss->zone_poison1 = sfCircleShape_create();
    sfCircleShape_setRadius(boss->zone_poison1, 600);
    sfCircleShape_setOrigin(boss->zone_poison1, scale);
    sfCircleShape_setFillColor(boss->zone_poison1, sfWhite);
    sfCircleShape_setOutlineColor(boss->zone_poison1, sfBlack);
    sfCircleShape_rotate(boss->zone_poison1, 180);
    boss->text_boss = sfTexture_createFromFile(
        "Assets/pictures/atkboss.png", NULL);
    sfCircleShape_setTexture(boss->zone_poison1, boss->text_boss, false);
}
void init_boss_sprites(boss *boss)
{
    boss->hpui_text = sfTexture_createFromFile(HPBOSS1, NULL);
    boss->hpui = sfSprite_create();
    sfSprite_setTexture(boss->hpui, boss->hpui_text, sfFalse);
    boss->hpfull_text = sfTexture_createFromFile(HPBOSS2, NULL);
    boss->hpfull = sfSprite_create();
    sfSprite_setTexture(boss->hpfull, boss->hpfull_text, sfFalse);
    boss->hpempty_text = sfTexture_createFromFile(HPBOSS3, NULL);
    boss->hpempty = sfSprite_create();
    sfSprite_setTexture(boss->hpempty, boss->hpempty_text, sfFalse);
}

void init_bosshp(boss *boss)
{
    init_boss_sprites(boss);
    boss->hp = 200;
    boss->hprect.top = 0;
    boss->hprect.left = 0;
    boss->hprect.width = 580;
    boss->hprect.height = 35;
    boss->text_boss = sfTexture_createFromFile(
        "Assets/pictures/monster.png", NULL);
    boss->clock_patern1 = sfClock_create();
    sfCircleShape_setRadius(boss->hitbox, 300);
    sfCircleShape_setTexture(boss->hitbox, boss->text_boss, false);
}

boss *init_boss(void)
{
    boss *boss = malloc(sizeof(*boss));
    sfVector2f scale;

    boss->status = 1;
    boss->hitbox = sfCircleShape_create();
    boss->range_pat1 = 600;
    scale.x = 300;
    scale.y = 300;
    sfCircleShape_setOrigin(boss->hitbox, scale);
    scale.x = 10348;
    scale.y = 1450;
    sfCircleShape_setPosition(boss->hitbox, scale);
    init_bosshp(boss);
    init_pat1(boss);
    return (boss);
}