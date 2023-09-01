#include "shell.h"

/**
 * free_d_p - Frees memory allocated for a double pointer (array of strings).
 * @p: The double pointer (array of strings) to free.
 */
void free_d_p(char **p)
{
    int i;
    for (i = 0; p[i] != NULL; i++)
        free(p[i]);
    free(p);
}
