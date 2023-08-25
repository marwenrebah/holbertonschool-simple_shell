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

char **str_split(char *line, char *delim);
void free_array(char **array);
void loop(int input);
void get_path(char **cmd);
void exec_command(char **cmd);
void print_environment(void);
void sigintHandler(int sig_num);
void if_conditions(char **cmd, char *line);

#endif
