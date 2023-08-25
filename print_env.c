#include "shell.h"
/**
 * print_environment - Prints the environment variables.
 */
void print_environment(void)
{
char **env_var = environ;
for (; *env_var; env_var++)
{
printf("%s\n", *env_var);
}
}
/**
 * if_conditions - Checks for built-in commands and takes appropriate actions.
 * @cmd: The command tokens.
 * @line: The input line.
 */
void if_conditions(char **cmd, char *line)
{
if (strcmp(cmd[0], "exit") == 0)
{
free(line);
if (cmd[1])
exit(atoi(cmd[1]));
free_array(cmd);
exit(0);
}
}
