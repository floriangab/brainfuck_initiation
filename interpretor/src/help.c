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
    write(1, " [OPTIONS] [FILE]\n",18);
    write(1, "Available Options:\n", 19);
    write(1, "\t-o outfile\tspecify output file name\n", 37);
    write(1, "\t-c c_outfile\tspecify C source file name.\n", 42);
    write(1, "\t-n\t\tDon't compile the C source, just output a copy of it\n", 58);
    write(1, "\t-h\t\tdisplay help\n", 18);
}