/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** prologue for myrpg
*/
#include "proto.h"

const char *prologue[50] = {
"How can you !",
"You failed us Theus, now you have to pay the price of your failure",
"I tried to protect you !!",
"And doing that you destroyed half of our ressources...",
"That hierophant was charging you tekfal !\nYou could have died !",
"You should have let me die theus, you always think about\nindividuals, \
but you never consider the group",
"In a tribe each person count, don't you think the same way ??",
"The council doesn't think like that, you should know that my friend...",
"And now you exile me, that's how you thank me",
"The rules are the rules Theus, im forced to do that, you know it",
"How can I come back",
"As mentionned in the ancient manuscript, the only way to get\nunbanned is to \
summon Athreus and kill him...",
"Athreus ??? The fallen god ?!!",
"Yes, it won't be easy but I believe in you, good luck my brother...",
"...",
NULL
};

bool skip_dia(void)
{
    int keysp = 0;
    if (sfKeyboard_isKeyPressed(sfKeySpace) && keysp != 1)
        keysp = 1;
    while (keysp) {
        if (!sfKeyboard_isKeyPressed(sfKeySpace)) {
            return (true);
        }
    }
    return (false);
}

void display_prologue(g_t *g_t)
{
    int i = 0;

    sfRenderWindow_setFramerateLimit(g_t->w_t->w, 30);
    while (prologue[i] != NULL) {
        sfRenderWindow_clear(g_t->w_t->w, sfBlack);
        sfText_setString(g_t->text->curr_text, prologue[i]);
        sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->bgpro, NULL);
        sfSprite_setPosition(g_t->sp_t->tekfal, g_t->vec_t->pos_loc2);
        sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->dia_box, NULL);
        sfRenderWindow_drawText(g_t->w_t->w, g_t->text->curr_text, NULL);
        if(i % 2 == 1)
            sfRenderWindow_drawSprite(g_t->w_t->w, g_t->sp_t->tekfal, NULL);
        sfRenderWindow_display(g_t->w_t->w);
        if (skip_dia())
            i++;
    }
}
