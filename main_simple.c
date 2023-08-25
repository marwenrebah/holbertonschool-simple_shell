#include "shell.h"
/**
 * free_array - Frees a dynamically allocated array of strings.
 * @array: The array to be freed.
 */
void free_array(char **array)
{
int i;
for (i = 0; array[i]; i++)
{
free(array[i]);
array[i] = NULL;
}
free(array);
array = NULL;
}
/**
 * loop - Main loop of the shell.
 * @input: 1 if shell is interactive, 0 if batch mode.
 */
void loop(int input)
{
char *line = NULL, **cmd = NULL;
size_t size = 0;
int length;
struct stat state;
while (1)
{
if (input)
write(STDOUT_FILENO, "$ ", 2);
length = getline(&line, &size, stdin);
if (length == EOF)
{
free(line);
exit(0);
}
if (strcmp(line, "\n") == 0)
continue;
cmd = str_split(line, " \t\r\n");
if_conditions(cmd, line);
if (strcmp(cmd[0], "env") == 0)
{
print_environment();
free_array(cmd);
continue;
}
if (stat(cmd[0], &state) != 0)
get_path(cmd);
if (cmd[0] == NULL)
{
printf("Command not found\n");
free(line);
line = NULL;
free_array(cmd);
cmd = NULL;
continue;
}
exec_command(cmd);
free_array(cmd);
}
free(line);
}
/**
 * main - Entry point of the shell program.
 * Return: Always returns 0.
 */
int main(void)
{
signal(SIGINT, sigintHandler);
loop(isatty(STDIN_FILENO));
return (0);
}
