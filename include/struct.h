/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** Structure header for mydefender
*/

#ifndef STRUCT_H_
#define STRUCT_H_
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Joystick.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Window/Sensor.h>
#include <stddef.h>
#include <time.h>

typedef struct item_s
{
    int damage;
    int range;
    sfVector2f pos_in_inv;
    char *name;
    char *path_name;
    sfTexture *item_text;
    sfSprite *item;
}item;

typedef struct mob_s
{
    sfTexture *text;
    sfSprite *sprite;
    sfVector2f baspos;
    sfIntRect rect;
    int state;
    int speed;
    int hp;
    int damage;
    int *pattern;
    sfVector2f next_pos;
}mob;

typedef struct inventory_s
{
    int nb_item;
    item **items;
}inventory;

typedef struct text_s
{
    sfText *curr_text;
    sfText *curr_qname;
    sfFont *font;
}text_t;

typedef struct bool_s
{
    bool vsync;
}bool_t;

typedef struct arr_s
{
    char **coll_map;
}arr_t;

typedef struct view_s
{
    sfView *cam;
}view_t;

typedef struct rec_s
{
    sfIntRect yn_rect;
    sfIntRect atk_rect;
    sfIntRect hp_rect;
    sfIntRect vol_rect;
    sfIntRect rect_char;
    sfFloatRect view_rect;
}rec_t;

typedef struct window_s
{
    sfRenderWindow *w;
}w_t;

typedef struct var_s
{
    int offset;
    int offset_2;
    int gen_volume;
    int release;
    int ind_it;
    int holding;
    float char_hp;
    float hp_max;
    int curr_quest;
}var_t;

typedef struct vec_s
{
    sfVector2f pos_quit;
    sfVector2f pos_play;
    sfVector2f pos_opt;
    sfVector2f pos_char;
    sfVector2f pos_char_o_m;
    sfVector2f pos_vol;
    sfVector2f pos_yn;
    sfVector2f pos_r;
    sfVector2f pos_g;
    sfVector2f pos_b;
    sfVector2f temp_pos_inv;
    sfVector2f pos_loc1;
    sfVector2f pos_loc2;
    sfVector2f true_pos;
    sfVector2f pos_hpui;
    sfVector2f pos_hpempty;
    sfVector2f pos_hpfull;
}vec_t;

typedef struct sprite_s
{
    sfTexture *s_m_txt;
    sfTexture *yn_txt;
    sfTexture *o_m_txt;
    sfTexture *l_m_txt;
    sfTexture *play_text;
    sfTexture *opt_txt;
    sfTexture *q_txt;
    sfTexture *perso_txt;
    sfTexture *carte_txt;
    sfTexture *inv_txt;
    sfTexture *vol_txt;
    sfTexture *r_txt;
    sfTexture *g_txt;
    sfTexture *b_txt;
    sfTexture *tekfal_txt;
    sfTexture *dia_box_txt;
    sfTexture *bgpro_txt;
    sfTexture *hp_ui_txt;
    sfTexture *hpfull_txt;
    sfTexture *hpempty_txt;
    sfTexture *atk_txt;
    sfSprite *s_m;
    sfSprite *yes_no;
    sfSprite *o_m;
    sfSprite *l_m;
    sfSprite *play;
    sfSprite *option;
    sfSprite *quit;
    sfSprite *perso;
    sfSprite *carte;
    sfSprite *inv;
    sfSprite *vol;
    sfSprite *r;
    sfSprite *g;
    sfSprite *b;
    sfSprite *tekfal;
    sfSprite *dia_box;
    sfSprite *bgpro;
    sfSprite *hp_ui;
    sfSprite *hpfull;
    sfSprite *hpempty;
    sfSprite *atk;
}sp_t;

typedef struct quest
{
    char *name;
    char *text_when_ac;
    sfVector2f pos_q;
    sfTexture *qtexture;
    sfSprite *qsprite;
}q;

typedef struct audio_s
{
    sfMusic *menu_music;
}audio_t;

typedef struct game_stat_s
{

}g_stat;

typedef struct anim_s
{
    sfClock *clock_char;
    sfClock *clock_atk;
    sfClock *clock_layer;
    float sec_char;
    float sec_atk;
    float sec_layer;
    sfTime time_char;
    sfTime time_atk;
    sfTime time_layer;
}anim_t;

typedef struct g_s
{
    audio_t *audio_t;
    view_t *view_t;
    anim_t *anim_t;
    inventory *inv;
    bool_t *bool_t;
    g_stat *g_stat;
    arr_t *arr_t;
    rec_t *rec_t;
    mob **mobs;
    vec_t *vec_t;
    text_t *text;
    sp_t *sp_t;
    q **quests;
    var_t *var;
    w_t *w_t;
}g_t;

#endif /* STRUCT_H_ */
