/*
** EPITECH PROJECT, 2020
** brainfuck interpretor
** File description:
** file with all error
*/

#include "interpretor.h"

int error(int ac, char **av)
{
    if((optind >= ac) || (strcmp(av[optind], "-") == 0)){
        fprintf(stderr, "%s: no input file specified\n", av[0]);
        print_help(av);
        return EPITECH_ERROR;
    }
    if((infile = fopen(av[optind], "r")) == 0){
        fprintf(stderr,"%s: could not open %s\n", av[0], av[optind]);
        return EPITECH_ERROR;
    }
    return 0;
}