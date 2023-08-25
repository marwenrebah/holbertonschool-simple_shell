#include "shell.h"
/**
 * str_split - Splits a line of string into an array of strings.
 * @line: Line to be parsed.
 * @delim: Delimiter to parse with.
 * Return: Array of parsed elements.
 */
char **str_split(char *line, char *delim)
{
char *ptr = NULL, **cmd = NULL;
size_t i = 0;
ptr = strtok(line, delim);
while (ptr)
{
cmd = realloc(cmd, ((i + 1) * sizeof(char *)));
cmd[i] = strdup(ptr);
ptr = strtok(NULL, delim);
i++;
}
/*Allocate memory for the NULL-terminator*/
cmd = realloc(cmd, ((i + 1) * sizeof(char *)));
cmd[i] = NULL;
return (cmd);
}
