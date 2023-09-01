#include "shell.h"

/**
 * check_path - Checks if a command exists in the system's PATH.
 * @command: The name of the command to search for.
 *
 * Return: If found, the full path of the command; otherwise, NULL.
 */
char *check_path(char *command)
{
    char *array[1000], *path = strdup(getenv("PATH"));
    char *path_token = strtok(path, ":");
    int i = 0;
    char *final_path;
    struct stat info;

    /*Check if the command exists in the current directory*/ 
    if (stat(command, &info) == 0)
    {
        strcpy(path, command);
        return (path);
    }

    final_path = (char *) malloc(1024 * sizeof(char));

    /* Tokenize the PATH variable into an array of directories*/
    while (path_token != NULL)
    {
        array[i] = path_token;
        i++;
        path_token = strtok(NULL, ":");
    }
    i = 0;
    while (array[i] != NULL)
    {
        strcpy(final_path, array[i]);
        strcat(final_path, "/");
        strcat(final_path, command);
        strcat(final_path, "\0");

        /*Check if the command exists in this directory*/ 
        if (stat(final_path, &info) == 0)
        {
            free(path);
            return (final_path);
        }
        i++;
    }

    free(final_path);
    free(path);

    /*If the command is not found in any directory in the PATH, return NULL*/ 
    return (NULL);
}
