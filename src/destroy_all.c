/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** destroy_all
*/

#include "../include/my_hunter.h"

void destroy_more(my_hunter_t *h)
{
    sfSprite_destroy(h->e.eric_s);
    sfTexture_destroy(h->e.eric_t);
    sfSprite_destroy(h->l.life_one);
    sfSprite_destroy(h->l.life_two);
    sfSprite_destroy(h->l.life_three);
    sfTexture_destroy(h->l.life_good);
    sfTexture_destroy(h->l.life_lost);
    sfText_destroy(h->s.score_text);
    sfText_destroy(h->s.score_nb);
    sfFont_destroy(h->s.font);
    sfFont_destroy(h->s.font_nb);
    sfText_destroy(h->s.high_score_text);
    sfText_destroy(h->s.high_score_nb);
    sfSprite_destroy(h->d.sprite);
    sfTexture_destroy(h->d.texture);
    sfSprite_destroy(h->g.game_over_s);
    sfTexture_destroy(h->g.game_over_t);
}

void destroy_all(my_hunter_t *h)
{
    sfRenderWindow_destroy(h->window);
    sfClock_destroy(h->clock);
    sfMusic_destroy(h->music);
    sfMusic_destroy(h->fire_sound);
    sfMusic_destroy(h->duck_sound);
    sfSprite_destroy(h->cursor_s);
    sfTexture_destroy(h->cursor_t);
    sfSprite_destroy(h->get_started_s);
    sfTexture_destroy(h->get_started_t);
    sfSprite_destroy(h->background.sky_s);
    sfTexture_destroy(h->background.sky_t);
    sfSprite_destroy(h->background.cloud_s);
    sfTexture_destroy(h->background.cloud_t);
    sfSprite_destroy(h->background.sea_s);
    sfTexture_destroy(h->background.sea_t);
    sfSprite_destroy(h->background.decor_s);
    sfTexture_destroy(h->background.decor_t);
    destroy_more(h);
}
