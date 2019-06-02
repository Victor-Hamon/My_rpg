/*
** EPITECH PROJECT, 2018
** my
** File description:
** my
*/

#ifndef PROTO_H_
#define PROTO_H_

#include "struct.h"
#include "macro.h"
#include "boss.h"
#include <math.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Joystick.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Window/Sensor.h>
#include <time.h>

/* Initialization */
sfRenderWindow *createWindow(int width, int height);
inventory *init_inventory(void);
sp_t *initialize_sprites(void);
bool_t *init_booleans(void);
view_t *init_view(g_t *g_t);
text_t *init_text(g_t *g_t);
var_t *init_variables(void);
g_t *init_game_struct(void);
audio_t *init_audio(void);
vec_t *init_vector(void);
anim_t *init_anim(void);
rec_t *init_rect(void);
q **init_quests(void);
boss *init_boss(void);
arr_t *get_map(void);

/*Game*/
void rpg(g_t *g_t, boss *boss);

/*Menu*/
void display_menu(g_t *g_t);
void display_option_menu(g_t *g_t);

/*Actions*/
void attack(g_t *g_t, boss *boss);
void enter_inventory(g_t *g_t);
void anim_char(g_t *g_t);
void move_char(g_t *g_t);

/*Player*/
void anim_atk(g_t *g_t);
void display_hp(g_t *g_t);
void display_character(g_t *g_t);

/*Map*/
void display_map(g_t *g_t);

/*Lib*/
int my_getnbr(char const *str);
bool click(void);
bool is_click_true(void);
int is_in_range(sfVector2f pos_char, sfVector2f pos_boss, int range);

/*Boss*/
void create_boss(boss *boss, g_t *g_t);

/*dialogues*/
void display_prologue(g_t *g_t);
void display_scenario(g_t *g_t);
bool skip_dia(void);

/*Quest*/
void check_for_ending(g_t *g_t, boss *boss);
void display_quest(g_t *g_t);
void check_for_quest(g_t *g_t);

/*Mobs*/
void display_mobs(g_t *g_t);
mob **create_mobs(g_t *g_t);

#endif /* PROTO_H_ */
