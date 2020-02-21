/*
** EPITECH PROJECT, 2020
** brainfuck interpretor
** File description:
** free function
*/

#include <stdlib.h>

void free_all(char *c_output_name, char *output_name)
{
    if(c_output_name)
        free(c_output_name);
    if(output_name)
        free(output_name);
}