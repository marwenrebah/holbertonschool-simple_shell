```markdown```

![Simple Shell](https://pbs.twimg.com/media/C93xIaaUwAAAM99.jpg)

# :octocat: Simple Shell Project

This is a basic implementation of a UNIX command line interpreter (shell). The shell provides a limited set of features, including command execution, environment variable display, and more. It is designed to be simple and educational rather than a fully-featured shell.

## :rocket: Features

- Display a prompt and wait for user input.
- Execute commands with or without arguments.
- Display prompt after executing each command.
- Handle built-in commands: `exit` and `env`.
- Handle the "end of file" condition (Ctrl+D).
- Basic PATH handling to locate executables.
- Free allocated memory to avoid memory leaks.

## :computer: Getting Started

To compile and run the simple shell, follow these steps:

1. Open your terminal.
2. Navigate to the directory containing the project files.
3. Compile the source files using the provided compilation command:

   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
   ```

4. Run the compiled executable:

   ```bash
   ./hsh
   ```

5. The shell will display a prompt (#cisfun$) where you can enter commands. Type `exit` to exit the shell.

## :clipboard: Usage

- Enter single-word commands to execute programs.
- Use the `env` command to display environment variables.
- Use the `exit` command to exit the shell.

## :warning: Limitations

- This shell is a basic implementation and may not handle all advanced features of a standard Unix shell.
- The shell doesn't handle special characters, quotes, redirection, pipes, or other advanced features.
- The code lacks advanced security features and input validation, so use it for educational purposes only.

### ✅ List of Allowed Functions and System Calls

- All functions from `string.h`
- `access` (man 2 access)
- `chdir` (man 2 chdir)
- `close` (man 2 close)
- `closedir` (man 3 closedir)
- `execve` (man 2 execve)
- `exit` (man 3 exit)
- `_exit` (man 2 _exit)
- `fflush` (man 3 fflush)
- `fork` (man 2 fork)
- `free` (man 3 free)
- `getcwd` (man 3 getcwd)
- `getline` (man 3 getline)
- `getpid` (man 2 getpid)
- `isatty` (man 3 isatty)
- `kill` (man 2 kill)
- `malloc` (man 3 malloc)
- `open` (man 2 open)
- `opendir` (man 3 opendir)
- `perror` (man 3 perror)
- `printf` (man 3 printf)
- `fprintf` (man 3 fprintf)
- `vfprintf` (man 3 vfprintf)
- `sprintf` (man 3 sprintf)
- `putchar` (man 3 putchar)
- `read` (man 2 read)
- `readdir` (man 3 readdir)
- `signal` (man 2 signal)
- `stat` (__xstat) (man 2 stat)
- `lstat` (__lxstat) (man 2 lstat)
- `fstat` (__fxstat) (man 2 fstat)
- `strtok` (man 3 strtok)
- `wait` (man 2 wait)
- `waitpid` (man 2 waitpid)
- `wait3` (man 2 wait3)
- `wait4` (man 2 wait4)
- `write` (man 2 write)

## :heart: Acknowledgments

This project was inspired by the need to understand the fundamentals of a Unix shell and its core functionalities.

- [Learn more about Unix Shell](https://en.m.wikipedia.org/wiki/Unix_shell) [:book:](https://en.m.wikipedia.org/wiki/Unix_shell)
- [Learn more about Ken Thompson](https://en.m.wikipedia.org/wiki/Ken_Thompson) [:man_technologist:](https://en.m.wikipedia.org/wiki/Ken_Thompson)

# License 👥

Authors :
🚀 Marwen Rebah<br>
📧 Email: 6863@holbertonstudents.com<br>
👻 Github: [https://github.com/marwenrebah](https://github.com/marwenrebah)<br>
