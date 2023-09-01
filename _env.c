#include "shell.h"

/**
 * _env - Prints the environment variables.
 */
void _env(void)
{
	char *s = environ[0];
	int i = 0;

	while (s != NULL)
	{
		printf("%s\n", environ[i]); /*Print the current environment variable*/
		s = environ[++i]; /*Move to the next environment variable*/
	}
}
