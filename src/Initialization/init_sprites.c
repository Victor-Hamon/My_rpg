/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** functions that initializes the sprites
*/
#include "proto.h"

sp_t *initialize_sprites_4(sp_t *sp_t)
{
    sfVector2f or;

    or.x = 30;
    or.y = 103;
    sp_t->atk_txt = sfTexture_createFromFile(PICATK, NULL);
    sp_t->atk = sfSprite_create();
    sfSprite_setTexture(sp_t->atk, sp_t->atk_txt, sfFalse);
    sfSprite_setOrigin(sp_t->atk, or);
    return (sp_t);
}

sp_t *initialize_sprites_3(sp_t *sp_t)
{
    sp_t->bgpro_txt = sfTexture_createFromFile(PIC12, NULL);
    sp_t->bgpro = sfSprite_create();
    sfSprite_setTexture(sp_t->bgpro, sp_t->bgpro_txt, sfFalse);
    sfSprite_setTexture(sp_t->l_m, sp_t->l_m_txt, sfFalse);
    sp_t->o_m_txt = sfTexture_createFromFile(PIC9, NULL);
    sp_t->o_m = sfSprite_create();
    sfSprite_setTexture(sp_t->o_m, sp_t->o_m_txt, sfFalse);
    sp_t->vol_txt = sfTexture_createFromFile(PIC10, NULL);
    sp_t->vol = sfSprite_create();
    sfSprite_setTexture(sp_t->vol, sp_t->vol_txt, sfFalse);
    sp_t->hp_ui_txt = sfTexture_createFromFile(HPPIC1, NULL);
    sp_t->hp_ui = sfSprite_create();
    sfSprite_setTexture(sp_t->hp_ui, sp_t->hp_ui_txt, sfFalse);
    sp_t->hpfull_txt = sfTexture_createFromFile(HPPIC2, NULL);
    sp_t->hpfull = sfSprite_create();
    sfSprite_setTexture(sp_t->hpfull, sp_t->hpfull_txt, sfFalse);
    sp_t->hpempty_txt = sfTexture_createFromFile(HPPIC3, NULL);
    sp_t->hpempty = sfSprite_create();
    sfSprite_setTexture(sp_t->hpempty, sp_t->hpempty_txt, sfFalse);
    return (sp_t);
}

sp_t *initialize_sprites_2(sp_t *sp_t)
{
    initialize_sprites_3(sp_t);
    sp_t->yn_txt = sfTexture_createFromFile(PIC11, NULL);
    sp_t->yes_no = sfSprite_create();
    sfSprite_setTexture(sp_t->yes_no, sp_t->yn_txt, sfFalse);
    sp_t->r_txt = sfTexture_createFromFile(PICr, NULL);
    sp_t->r = sfSprite_create();
    sfSprite_setTexture(sp_t->r, sp_t->r_txt, sfFalse);
    sp_t->g_txt = sfTexture_createFromFile(PICg, NULL);
    sp_t->g = sfSprite_create();
    sfSprite_setTexture(sp_t->g, sp_t->g_txt, sfFalse);
    sp_t->b_txt = sfTexture_createFromFile(PICb, NULL);
    sp_t->b = sfSprite_create();
    sfSprite_setTexture(sp_t->b, sp_t->b_txt, sfFalse);
    sp_t->tekfal_txt = sfTexture_createFromFile(PICtekfal, NULL);
    sp_t->tekfal = sfSprite_create();
    sfSprite_setTexture(sp_t->tekfal, sp_t->tekfal_txt, sfFalse);
    sp_t->dia_box_txt = sfTexture_createFromFile(PICdia_box, NULL);
    sp_t->dia_box = sfSprite_create();
    sfSprite_setTexture(sp_t->dia_box, sp_t->dia_box_txt, sfFalse);
    return (sp_t);
}

sp_t *initialize_sprites_1(sp_t *sp_t)
{
    sfVector2f scale;

    scale.x = 2;
    scale.y = 2;
    initialize_sprites_4(sp_t);
    sp_t->perso_txt = sfTexture_createFromFile(PIC5, NULL);
    sp_t->perso = sfSprite_create();
    sfSprite_setTexture(sp_t->perso, sp_t->perso_txt, sfFalse);
    sp_t->carte_txt = sfTexture_createFromFile(PIC6, NULL);
    sp_t->carte = sfSprite_create();
    sfSprite_setTexture(sp_t->carte, sp_t->carte_txt, sfFalse);
    sfSprite_setScale(sp_t->carte, scale);
    sp_t->l_m_txt = sfTexture_createFromFile(PIC8, NULL);
    sp_t->l_m = sfSprite_create();
    initialize_sprites_2(sp_t);
    return (sp_t);
}

sp_t *initialize_sprites(void)
{
    sp_t *sp_t = malloc(sizeof(*sp_t));

    initialize_sprites_1(sp_t);
    sp_t->s_m_txt = sfTexture_createFromFile(PIC1, NULL);
    sp_t->s_m = sfSprite_create();
    sfSprite_setTexture(sp_t->s_m, sp_t->s_m_txt, sfFalse);
    sp_t->q_txt = sfTexture_createFromFile(PIC2, NULL);
    sp_t->quit = sfSprite_create();
    sfSprite_setTexture(sp_t->quit, sp_t->q_txt, sfFalse);
    sp_t->play_text = sfTexture_createFromFile(PIC3, NULL);
    sp_t->play = sfSprite_create();
    sfSprite_setTexture(sp_t->play, sp_t->play_text, sfFalse);
    sp_t->opt_txt = sfTexture_createFromFile(PIC4, NULL);
    sp_t->option = sfSprite_create();
    sfSprite_setTexture(sp_t->option, sp_t->opt_txt, sfFalse);
    return (sp_t);
}