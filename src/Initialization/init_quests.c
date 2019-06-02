/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** quest for my rpg
*/
#include "proto.h"

q *init_quest_1(void)
{
    q *q1 = malloc(sizeof(* q1));
    q1->qtexture = sfTexture_createFromFile("Assets/pictures/blood.png", NULL);
    q1->qsprite = sfSprite_create();
    sfSprite_setTexture(q1->qsprite, q1->qtexture, sfFalse);
    q1->name = "Athreus blood";
    q1->text_when_ac =
    "I have to find the first of the four element, his blood...";
    q1->pos_q.x = 2300;
    q1->pos_q.y = 12950;
    return (q1);
}

q *init_quest_2(void)
{
    q *q1 = malloc(sizeof(* q1));
    q1->qtexture = sfTexture_createFromFile("Assets/pictures/ether.png", NULL);
    q1->qsprite = sfSprite_create();
    sfSprite_setTexture(q1->qsprite, q1->qtexture, sfFalse);
    q1->name = "Athreus breath";
    q1->text_when_ac = "PTDR CHUIS OU";
    q1->pos_q.x = 10660;
    q1->pos_q.y = 10152;
    return (q1);
}

q *init_quest_3(void)
{
    q *q1 = malloc(sizeof(* q1));
    q1->qtexture = sfTexture_createFromFile("Assets/pictures/bone.png", NULL);
    q1->qsprite = sfSprite_create();
    sfSprite_setTexture(q1->qsprite, q1->qtexture, sfFalse);
    q1->name = "Athreus bone";
    q1->text_when_ac = "adz";
    q1->pos_q.x = 7070;
    q1->pos_q.y = 6352;
    return (q1);
}

q *init_quest_4(void)
{
    q *q1 = malloc(sizeof(* q1));
    q1->qtexture = sfTexture_createFromFile("Assets/pictures/eye.png", NULL);
    q1->qsprite = sfSprite_create();
    sfSprite_setTexture(q1->qsprite, q1->qtexture, sfFalse);
    q1->name = "Athreus eye";
    q1->text_when_ac = "zefd";
    q1->pos_q.x = 7332;
    q1->pos_q.y = 1104;
    return (q1);
}

q **init_quests(void)
{
    q **quests = malloc(sizeof(q *) * 4);

    quests[0] = init_quest_1();
    quests[1] = init_quest_2();
    quests[2] = init_quest_3();
    quests[3] = init_quest_4();
    return (quests);
}
