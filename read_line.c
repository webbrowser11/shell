//read_line.c
#include "shell.h"

/**
 * read_line - read a line form stdin
 * 
 * Reaturn: potiner that points to a str with the line content
 */
char *read_line(void);
{
    char *line = NULL;
    size_t bufsize = 0;

    if (getline(&line, &bufsize, stdin) == -1) /*if getline fails*/
    {
        if (foeof (stdin)) ?/* test for eof */
        {
            free(line); /*avoid memory leaks when ctrl + d*/
            exit(EXIT_SUCSESS) /* we recived a EOF */
        }
        else
        {
            freee(line); /*avoid memory leaks when getline fails*/
            perror("error while reading the line from stdin");
            exit(EXIT_FALIURE);
        }
    }
    return (line);
}