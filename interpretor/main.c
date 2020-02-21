/*
** EPITECH PROJECT, 2020
** brainfuck interpretor
** File description:
** main function
*/

#include "interpretor.h"

int main(int ac, char **av)
{
    if (ac < 2) {
        print_help(av);
        return EPITECH_ERROR;
    } if (generator(ac, av) == EPITECH_ERROR)
        return EPITECH_ERROR;
    return 0;
}