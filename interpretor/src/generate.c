/*
** EPITECH PROJECT, 2020
** brainfuck interpretor
** File description:
** function to generate brainfuck to c
*/

#include <stdlib.h>
#include "interpretor.h"

int compile(char *output_name, char *c_output_name, char *CC, int no_compile)
{
    if(!c_output_name)
        c_output_name = "my_brainfuck.c";
    if((outfile = fopen(c_output_name, "w")) == 0){
        fprintf(stderr, "error opening output file %s\n", c_output_name);
        return EPITECH_ERROR;
    }
    create_file();
    fclose(outfile);
    if(!output_name)
        output_name = "my_brainfuck";
    strcat(CC, " -o ");
    strcat(CC, output_name);
    strcat(CC, " ");
    strcat(CC, c_output_name);
    if(!no_compile)
        system(CC);
    return 0;
}

int generator(int ac, char **av)
{
    char *output_name = NULL; /* name of the executable that will be made */
    char *c_output_name = NULL; /* name of the C source file that is generated */
    char CC[256] = "/usr/bin/gcc";
    int no_compile = 0; /* Don't compile, just generate C source file */

    if (error(ac, av) == EPITECH_ERROR || \
        compile(output_name, c_output_name, CC, no_compile) == EPITECH_ERROR)
        return EPITECH_ERROR;
    free_all(c_output_name, output_name);
    return 0;
}

void create_file(void){
    char c;

    fprintf(outfile, "/*\n** This source was automatically generated with");
    fprintf(outfile, "\n** The \"brainfuck compiler\".");
    fprintf(outfile, "\n** florian_gabon");
    fprintf(outfile, "\n*/\n");
    fprintf(outfile, "#include <stdio.h>\n");
    fprintf(outfile, "int main()\n{\n\tchar a[30000];\n\tchar *ptr = a;\n\n");
    while((c=fgetc(infile)) != EOF){
        switch(c) {
            case '>': fprintf(outfile, "\tptr++;\n"); break;
            case '<': fprintf(outfile, "\tptr--;\n"); break;
            case '+': fprintf(outfile, "\t++*ptr;\n"); break;
            case '-': fprintf(outfile, "\t--*ptr;\n"); break;
            case '[': fprintf(outfile, "\twhile(*ptr) {\n"); break;
            case ']': fprintf(outfile, "\t}\n"); break;
            case '.': fprintf(outfile, "\tputchar(*ptr);\n"); break;
            case ',': fprintf(outfile, "\t*ptr=getchar();\n"); break;
        }
    }
    fprintf(outfile,"return 0;\n}\n");
}