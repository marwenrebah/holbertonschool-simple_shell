#include "shell.h"

/**
 * execute_line - Executes a command by forking a new process and using execve.
 * @tokens: The vector containing the command and its arguments.
 * @path: The full path to the command executable.
 *
 * Return: The exit status of the executed command.
 */
int execute_line(char **tokens, char *path)
{
	int status = 0;
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("Fork failed");
		exit(1);
	}

	if (pid == 0)
	{
		/*Child process: execute the command*/
		execve(path, tokens, environ);

		/*If execve fails, print an error message and exit*/
		perror("execve failed");
		exit(2);
	}
	else
	{
		/*Parent process: wait for the child process to finish*/
		wait(&status);
		if (WIFEXITED(status))
			status = WEXITSTATUS(status);
	}

	return (status);
}
