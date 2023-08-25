#include "shell.h"
/**
 * main - Entry point for the simple shell.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: Always returns 0.
 */
int main(int argc, char **argv)
{
char *readline, **tokens, *path = NULL;
int status;
(void) argc;
(void) argv;
while (1)
{
if (isatty(STDIN_FILENO))
printf("$ ");
readline = read_line();
/*Check if the user entered the "env" command*/
if (strcmp("env\n", readline) == 0)
{
free(readline);
_env();
continue;
}
tokens = parse_the_line(readline, TOK_DELIM);
if (*tokens == NULL)
{
free_d_p(tokens);
continue;
}
/*Check if the command exists in the PATH*/
path = check_path(*tokens);
if (path != NULL)
{
/*Execute the command and get its exit status*/
status = execute_line(tokens, path);
free(path);
}
free_d_p(tokens);
}
status = 1;
return (0);
}
