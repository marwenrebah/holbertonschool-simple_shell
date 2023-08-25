Hi 👨🏻‍💻, I'm Marwen Rebah
![1_2_6hIEbHD47urw5OcIaUFg](https://github.com/marwenrebah/holbertonschool-simple_shell/assets/133456502/3eeacd93-3369-41a2-b5b3-849c11e54f0c)
📋 Simple Shell Description:

The Simple Shell is an intuitive and efficient command-line interface (CLI) program designed to facilitate interaction between users and computer operating systems. By providing a streamlined way to input and execute commands, the Simple Shell serves as a bridge between users' intentions and the underlying system processes.

⚙ Core Loop of a Shell: Read-Evaluate-Print Loop (REPL):
1 - Print Prompt: The cycle begins by displaying a user-friendly prompt, prompting command input and initiating system interaction.

2 - Read and Parse: The shell reads user input, then meticulously analyzes and interprets command components to grasp its intention.

3 - Execute: Guided by clarity, the shell executes the parsed command, instructing the system, effecting actions, and potentially invoking external processes.

4 - Repeat and Prompt: Post-execution, the shell reverts to its receptive state, displaying the prompt anew. This seamless flow enables uninterrupted command submission.

📁 Files:

| Files      | Description |
| ----------- | ----------- |
| main_simple     | Main function for simple shell   |
| split      | Function that parse or split a line   |
| print_env   | Function that print environment        |
| Get Path	      | Function that returns the path of a command line     |
| Execute Function	   | Function that executes a command line        |
| man_1_simple_shell      | Manual Page    |
| AUTHORS   | 	AUTHORS       |




🛠️ Simple Shell:

Prompts appear after each command execution.
Displays a prompt, awaiting user commands.
Typing "EXIT" terminates the shell and interface.
Prints current environment on "ENV" command.
Executes common shell commands: ls, pwd, cd, exit, env.
Program stops via CTRL + D shortcut.

📃 Allowed Functions and System Calls:

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

Compilation and Testing:

✔️ Compiler:

Use our compiler to build the shell:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

Testing:
Ensure your shell functions correctly in both interactive and non-interactive modes.
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

👥 License:
Authors :
Marwen Rebah 📧 <6863@holbertonstudents.com>
Github 👻 <https://github.com/marwenrebah>
