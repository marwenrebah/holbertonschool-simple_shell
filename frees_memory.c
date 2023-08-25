#include "shell.h"
/**
 * free_d_p - Frees memory allocated for a double pointer and its content.
 * @p: The double pointer to be freed.
 */
void free_d_p(char **p)
{
int i;
/*Loop through the array of pointers to free each individual pointer*/
for (i = 0; p[i] != NULL; i++)
free(p[i]);
free(p);
}
