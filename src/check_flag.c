/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** check_flag
*/

#include "../include/my_hunter.h"

int print_info(void)
{
    my_putstr("my_hunter by Arthur DOS SANTOS\n");
    my_putstr("EPITECH 2022\n");
    return 0;
}

int print_help(void)
{
    my_putstr("USAGE : ./my_hunter [OPTIONS]\n\n");
    my_putstr("OPTIONS :\n");
    my_putstr("\t-h\t\tprint the usage and quit.\n");
    my_putstr("\t-i\t\tprint informations about the program.\n");
    my_putstr("USER INTERACTIONS :\n");
    my_putstr("\tLEFT CLICK\tto shoot.\n");
    my_putstr("\tESCAPE\t\tto quit the program.\n");
    return 0;
}

int check_flag(char *flag, my_hunter_t *h)
{
    (void)(h);
    if (my_strcmp(flag, "-h") == 0 || my_strcmp(flag, "--help") == 0)
        return print_help();
    if (my_strcmp(flag, "-i") == 0 || my_strcmp(flag, "--info") == 0)
        return print_info();
    if (my_strcmp(flag, "--eric") == 0) {
        h->e.eric_mode = 1;
        return my_hunter(h);
    }
    return 84;
}
