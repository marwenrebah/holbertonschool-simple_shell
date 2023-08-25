#include "shell.h"
/**
 * exec_command - Execute a command.
 * @cmd: The command to be executed.
 */
void exec_command(char **cmd)
{
pid_t pid = 0;
int status = 0;
if (!cmd)
return;
pid = fork();
if (pid == -1)
{
perror("Error in Fork");
}
else if (pid > 0)
{
waitpid(pid, &status, 0);
}
else
{
if (execvp(cmd[0], cmd) == -1)
{
perror(cmd[0]); /*Print an error message*/
exit(EXIT_FAILURE);
}
}
}
/**
 * sigintHandler - Handle the Control-C signal.
 * @sig_num: The signal number.
 */
void sigintHandler(__attribute__((unused)) int sig_num)
{
signal(SIGINT, sigintHandler);
printf("\n");
write(STDOUT_FILENO, "$ ", 2);
}
