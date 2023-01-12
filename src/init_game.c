/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init_game
*/

#include "../include/my_hunter.h"

void init_game(my_hunter_t *h)
{
    init_window(h);
    init_sound(h);
    init_background(h);
    init_utils(h);
    init_sprite(h);
    init_life(h);
    init_score(h);
    init_eric_mode(h);
    init_score_board(h);
    init_game_over(h);
    init_start(h);
}
