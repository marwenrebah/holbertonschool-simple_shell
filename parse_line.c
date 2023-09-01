#include "shell.h"

/**
 * parse_the_line - Parses the input line into an array of words.
 * @readline: The input string to be parsed.
 * @separator: The separator used to split the input into words.
 *
 * Return: An array of words (tokens) obtained by splitting the input.
 */
char **parse_the_line(char *readline, const char *separator)
{
	int i = 0, size = SIZE;
	char **tokens = (char **) malloc(size * sizeof(char *)), *token = NULL;

	/*Tokenize the input string using the specified separator*/
	token = strtok(readline, separator);

	/*Iterate through the tokens and store them in the tokens array*/
	while (token != NULL)
	{
		tokens[i] = strdup(token);
		i++;
		token = strtok(NULL, separator);
	}

	tokens[i] = NULL;

	free(readline);

	return (tokens);
}
