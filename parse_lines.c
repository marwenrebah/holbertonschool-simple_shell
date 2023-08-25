#include "shell.h"
/**
 * parse_the_line - Parse the input line into an array of words.
 * @readline: The input line to be parsed.
 * @seperator: The string used as a delimiter to separate words.
 * Return: An array of words (tokens).
 */
char **parse_the_line(char *readline, const char *seperator)
{
int i = 0, size = SIZE;
char **tokens = (char **)malloc(size * sizeof(char *));/*memory for tokens*/
char *token = NULL; /*Token variable to store each parsed word*/
token = strtok(readline, seperator);
while (token != NULL)
{
/*Store the parsed word in the tokens array*/
tokens[i] = strdup(token);
i++;
token = strtok(NULL, seperator);
}
tokens[i] = NULL;
free(readline);
return (tokens);
}
