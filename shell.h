#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>

#define TOK_DELIM " \t\n" /*Define delimiter characters for tokenization*/
#define SIZE 64

extern char **environ;

char *read_line(void);
/**Function to read a line from stdin*/

char **parse_the_line(char *, const char *);
/*Function to parse input into tokens*/

int execute_line(char **, char *);
/*Function to execute a command*/

void _env(void);
/*Function to print environment variables*/

char *check_path(char *);
/*Function to check the path of a command*/

void free_d_p(char **);
/*Function to free a double pointer*/

#endif
