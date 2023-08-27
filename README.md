<h1 align="center">Hi 👨🏻‍💻, I'm Marwen Rebah</h1>
![1_2_6hIEbHD47urw5OcIaUFg](https://github.com/marwenrebah/holbertonschool-simple_shell/assets/133456502/243410ab-0394-4d3f-8064-bb0061a2f8de)

<h1>📋 Description:</h1>
<p>The Simple Shell is a command-line interface (CLI) program designed to receive commands from the keyboard and then direct them to the operating system for execution.</p>

<h1>Core Loop of a Shell: Read-Evaluate-Print Loop:</h1>
1- Print Prompt: The cycle begins by displaying a user-friendly prompt, prompting command input and initiating system interaction.
2-Read and Parse: The shell reads user input, then meticulously analyzes and interprets command components to grasp its intention.
3-Execute: Guided by clarity, the shell executes the parsed command, instructing the system, effecting actions, and potentially invoking external processes.
4-Repeat and Prompt: Post-execution, the shell reverts to its receptive state, displaying the prompt anew. This seamless flow enables uninterrupted command submission.

<h1>🛠️ Simple Shell:</h1>
Prompts appear after each command execution.
Displays a prompt, awaiting user commands.
Typing "EXIT" terminates the shell and interface.
Prints current environment on "ENV" command.
Executes common shell commands: ls, pwd, cd, exit, env.
Program stops via CTRL + D shortcut.

<h1>🗂️ Files:</h1>
| Files      | Description |
| ----------- | ----------- |
| main_simple.c      | The main function of the program.     |
| split.c   | A function responsible for parsing or splitting a line.        |
| print_env.c      | A function to print the environment.     |
| shell.h  | Header files for the the whole project.        |
| get_path.c  | A function that returns the path of a command line.        |
| AUTHORS  | List of authors of the program.        |
| execute.c  | A function that executes a command line.        |

<h1>Allowed Functions and System Calls:</h1>
* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* getpid (man 2 getpid)
* isatty (man 3 isatty)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)
<h1>🔭 Compilation and Testing::</h1>
Use our compiler to build the shell:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

Testing:

Interactive Mode:

$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$


Non-Interactive Mode:

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$