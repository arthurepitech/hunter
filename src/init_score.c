/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init_score
*/

#include "../include/my_hunter.h"
#include <fcntl.h>
#include <unistd.h>

char *load_file_in_mem(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return NULL;
    char *buffer = malloc(sizeof(char) * 100000000);
    int size = read(fd, buffer, 100000000);
    if (size == -1)
        return NULL;
    buffer[size] = '\0';
    return buffer;
}

void init_score_board(my_hunter_t *h)
{
    h->s.score_board = fopen("score_board", "r+");

    h->s.high_score = my_getnbr(load_file_in_mem("score_board"));
    h->s.high_score_text = sfText_create();
    sfText_setString(h->s.high_score_text, "High Score:");
    sfText_setFont(h->s.high_score_text, h->s.font);
    sfText_setCharacterSize(h->s.high_score_text, 40);
    sfText_setPosition(h->s.high_score_text, (sfVector2f){1500, 110});
    sfText_setColor(h->s.high_score_text, sfBlack);
    h->s.high_score_nb = sfText_create();
    sfText_setString(h->s.high_score_nb, my_int_to_array(h->s.high_score));
    sfText_setFont(h->s.high_score_nb, h->s.font_nb);
    sfText_setCharacterSize(h->s.high_score_nb, 80);
    sfText_setPosition(h->s.high_score_nb, (sfVector2f){1700, 75});
    sfText_setColor(h->s.high_score_nb, sfBlack);
}

void init_score(my_hunter_t *h)
{
    if (h->e.eric_mode == 1)
        h->s.score = 999;
    else
        h->s.score = 0;
    h->s.score_text = sfText_create();
    h->s.font = sfFont_createFromFile("assets/utils/font.ttf");
    sfText_setFont(h->s.score_text, h->s.font);
    sfText_setCharacterSize(h->s.score_text, 40);
    sfText_setColor(h->s.score_text, sfBlack);
    sfText_setString(h->s.score_text, "Score ");
    sfText_setPosition(h->s.score_text, (sfVector2f){1500, 70});
    h->s.score_nb = sfText_create();
    h->s.font_nb = sfFont_createFromFile("assets/utils/number.ttf");
    sfText_setFont(h->s.score_nb, h->s.font_nb);
    sfText_setCharacterSize(h->s.score_nb, 80);
    sfText_setColor(h->s.score_nb, sfBlack);
    sfText_setString(h->s.score_nb, my_int_to_array(h->s.score));
    sfText_setPosition(h->s.score_nb, (sfVector2f){1650, 35});
}
