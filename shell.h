#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

extern char **environ;

/*str_split - Splits a line of string into an array of strings.*/
char **str_split(char *line, char *delim);

/*free_array - Frees a dynamically allocated array of strings*/
void free_array(char **array);

/*loop - The main loop for the shell's Read-Evaluate-Print Loop*/
void loop(int input);

/*get_path - Retrieves the executable path for a command.*/
void get_path(char **cmd);

/*exec_command - Executes a command.*/
void exec_command(char **cmd);

/*print_environment - Prints environment variables.*/
void print_environment(void);

/*sigintHandler - Handles the Control-C signal.*/
void sigintHandler(int sig_num);

/*if_conditions - Tests for built-in commands.*/
void if_conditions(char **cmd, char *line);

#endif
