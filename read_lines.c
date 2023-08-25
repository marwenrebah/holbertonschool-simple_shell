#include "shell.h"
/**
 * read_line - Read a line from stdin.
 * Return: The read line as a string.
 */
char *read_line(void)
{
char *input = NULL;
size_t bufsize = 0;
ssize_t input_len;
input_len = getline(&input, &bufsize, stdin);
if (input_len == -1)
{
free(input);
exit(EXIT_FAILURE);
}
else if (feof(stdin)) /*Check if end-of-file (Ctrl+D) is encountered*/
{
free(input);
exit(0);
}
/*Check if the user entered "exit", if so, exit the shell*/
if (strcmp(input, "exit\n") == 0)
{
free(input);
exit(0);
}
return (input);
}
