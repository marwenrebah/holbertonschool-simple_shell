#include "shell.h"
/**
 * execute_line - Execute a command using the execve function.
 * @tokens: The array of command and arguments to execute.
 * @path: The full path to the executable command.
 * Return: The exit status of the executed command.
 */
int execute_line(char **tokens, char *path)
{
int status = 0;
pid_t pid;
pid = fork();
if (pid == 0)
{
/*Execute the command using the specified path and arguments*/
execve(path, tokens, environ);
perror("Execution failed");
exit(EXIT_FAILURE);
}
else
{
wait(&status);
if (WIFEXITED(status))
status = WEXITSTATUS(status);
}
return (status);
}
