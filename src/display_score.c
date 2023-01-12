/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** display_score
*/

#include "../include/my_hunter.h"

void display_score(my_hunter_t *h)
{
    sfRenderWindow_drawText(h->window, h->s.score_text, NULL);
    sfRenderWindow_drawText(h->window, h->s.score_nb, NULL);
    sfRenderWindow_drawText(h->window, h->s.high_score_text, NULL);
    sfRenderWindow_drawText(h->window, h->s.high_score_nb, NULL);
    if (h->s.score >= h->s.high_score)
        sfText_setString(h->s.high_score_nb, my_int_to_array(h->s.score));
}
