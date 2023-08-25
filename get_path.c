#include "shell.h"
/**
 * get_path - Retrieves the full path of an executable command.
 * @cmd: The command line entered by the user.
 */
void get_path(char **cmd)
{
int i;
char **tok = NULL, *path = strdup(getenv("PATAH")), *tmp = NULL;
/*Split the PATH variable into individual directories*/
tok = str_split(path, ":");
free(path);
path = NULL;
for (i = 0; tok[i]; i++)
{
/*Construct the potential full path of the command*/
tmp = calloc(sizeof(char), (strlen(tok[i]) + 1 + strlen(cmd[0]) + 1));
strcat(tmp, tok[i]);
strcat(tmp, "/");
strcat(tmp, cmd[0]);
/*Check if the constructed path points to an existing command*/
if (access(tmp, F_OK) == 0)
break;
free(tmp);
tmp = NULL;
}
free_array(tok);
free(cmd[0]);
cmd[0] = tmp;
}
