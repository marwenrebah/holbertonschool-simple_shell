#include "shell.h"
/**
 * check_path - Check if the command exists in the system's PATH directories.
 * @command: The command to check.
 * Return: The full path of the command if found, or NULL if not found.
 */
char *check_path(char *command)
{
char *array[1000], *path = strdup(getenv("PATH"));
char *path_token = strtok(path, ":");
int i = 0;
char *final_path;
struct stat info;
/*  If the command is found in the current directory. */
if (stat(command, &info) == 0)
{
strcpy(path, command);
return (path);
}
final_path = (char *)malloc(1024 * sizeof(char));
/*Loop through each directory in the PATH*/
while (path_token != NULL)
{
array[i] = path_token;
i++;
path_token = strtok(NULL, ":");
}
i = 0;
/* Search for the command in each directory. */
while (array[i] != NULL)
{
strcpy(final_path, array[i]);
strcat(final_path, "/");
strcat(final_path, command);
strcat(final_path, "\0");
/* If the command is found in the directory. */
if (stat(final_path, &info) == 0)
{
free(path);
return (final_path);
}
i++;
}
free(final_path);
free(path);
return (NULL);
}
