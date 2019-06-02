/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** audio for my_rpg
*/
#include "proto.h"

audio_t *init_audio(void)
{
    audio_t *audio_t = malloc(sizeof(*audio_t));

    audio_t->menu_music = sfMusic_createFromFile("Assets/audio/menu.ogg");
    sfMusic_setLoop(audio_t->menu_music, sfTrue);
    sfMusic_setPitch(audio_t->menu_music, 1);
    sfMusic_setVolume(audio_t->menu_music, 100);
    return (audio_t);
}