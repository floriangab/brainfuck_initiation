/*
** EPITECH PROJECT, 2020
** brainfuck interpretor
** File description:
** help print function
*/

#include "interpretor.h"

void print_help(char **av)
{
    write(1, "the \"brainfuck compiler\"\n", 25);
    write(1, "by florian_gabon <florian.gabon@epitech.eu>\n", 44);
    write(1, "\nUsage: ", 8);
    write(1, av[0], strlen(av[0]));
    write(1, " [FILE]\n",18);
}