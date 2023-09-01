#include "shell.h"

/**
 * read_line - Reads a line of text from standard input (stdin).
 *
 * Return: The input line as a dynamically allocated string.
 */
char *read_line(void)
{
    char *input = NULL;
    size_t bufsize = 0;
    ssize_t input_len;

    /*Read a line from standard input into the 'input' buffer*/ 
    input_len = getline(&input, &bufsize, stdin);
    if (input_len == -1)
    {
        free(input);
        /*Check if the end-of-file (EOF) was reached*/ 
        if (feof(stdin))
            exit(0);
        else
        {
            perror("getline failed");
            exit(1);
        }
    }

    return (input);
}
