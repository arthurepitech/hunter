/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#ifndef MY_HUNTER_H_
    #define MY_HUNTER_H_
    #include "my_struct.h"
    #include "my.h"
    #include <time.h>
    #include <stdlib.h>


int my_hunter(my_hunter_t *h);
int check_flag(char *flag, my_hunter_t *h);

/*           INIT ALL           */
void init_game(my_hunter_t *h);
void init_sound(my_hunter_t *h);
void init_window(my_hunter_t *h);
void init_background(my_hunter_t *h);
void init_utils(my_hunter_t *h);
void init_sprite(my_hunter_t *h);
void init_score(my_hunter_t *h);
void init_life(my_hunter_t *h);
void init_eric_mode(my_hunter_t *h);
void init_score_board(my_hunter_t *h);
void init_game_over(my_hunter_t *h);
void init_start(my_hunter_t *h);

/*          DISPLAY ALL         */
void display_game(my_hunter_t *h);
void display_parallax(my_hunter_t *h);
void display_duck(my_hunter_t *h);
void display_cursor(my_hunter_t *h);
void display_score(my_hunter_t *h);
void display_life(my_hunter_t *h);
void display_eric_mode(my_hunter_t *h);
void display_game_over(my_hunter_t *h);
void display_start(my_hunter_t *h);

void get_event(my_hunter_t *h);
void parallax_background(my_hunter_t *h);
void anime_a_sprite(my_hunter_t *h, int offset, int max_value);
void get_high_score(my_hunter_t *h);

/*          DESTROY ALL         */
void destroy_all(my_hunter_t *h);

#endif /* !MY_HUNTER_H_ */
