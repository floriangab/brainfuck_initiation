/*
** EPITECH PROJECT, 2020
** brainfuck interpretor
** File description:
** file contains all prototypes
*/

#ifndef INTERPRETOR_H_
 #define INTERPRETOR_H_
  #include <getopt.h>
  #include <stdio.h>
  #include <string.h>
  #include <unistd.h>

  FILE *outfile;
  FILE *infile;
  static const int EPITECH_ERROR = 84;

    /* --- error.c --- */
    int error(int ac, char **av);

    /* --- help.c --- */
    void print_help(char **av);

    /* --- generate.c --- */
    int compile(char *output_name, char *c_output_name, char *CC, int no_compile);
    int generator(int ac, char **av);
    void create_file();

    /* --- free.c --- */
    void free_all(char *c_output_name, char *output_name);

#endif /* !INTERPRETOR_H_ */
