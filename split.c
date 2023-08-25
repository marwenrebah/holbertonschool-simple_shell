#include "shell.h"
/**
 * str_split - function that splits a line into an array of strings.
 * @line: the line to be split.
 * @delim: the delimiter to use for splitting.
 * Return: an array of split elements.
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
cmd = realloc(cmd, ((i + 1) * sizeof(char *)));
cmd[i] = NULL;
return (cmd);
}
