<h1 align="center">Simple Shell Project</h1>

<p align="center"> <img src="https://github.com/marwenrebah/holbertonschool-simple_shell/assets/133456502/1eff87de-2116-4a56-8fab-8e21a1f6880f/" alt="Shell Project Screenshot"/> </p>

<h1>📋 Description:</h1>
<p>The Simple Shell is a command-line interface (CLI) program designed to receive commands from the keyboard and then direct them to the operating system for execution.</p>

 <h1>⚙️ Core Loop of a Shell: Read-Evaluate-Print Loop:</h1>
    <ol>
        <li><strong>Print Prompt:</strong> Initiates by showcasing a user-friendly prompt, beckoning for commands and initiating interaction with the system.</li>
        <li><strong>Read and Parse:</strong> The shell captures user input, meticulously dissects it, and interprets command elements to comprehend its intent.</li>
        <li><strong>Execute:</strong> With clear insight, the shell enacts the parsed command, issuing instructions to the system, executing actions, and potentially invoking external processes.</li>
        <li><strong>Repeat and Prompt:</strong> After execution, the shell smoothly transitions back to its receptive stance, promptly displaying the prompt once more. This unbroken cycle ensures continuous, hassle-free command submission.</li>
    </ol>

<h1>🛠️ Simple Shell:</h1>
    <ul>
        <li>Prompts appear after each command execution.</li>
        <li>Displays a prompt, awaiting user commands.</li>
        <li>Typing "EXIT" terminates the shell and interface.</li>
        <li>Prints current environment on "ENV" command.</li>
        <li>Executes common shell commands: ls, pwd, cd, exit, env.</li>
        <li>Program stops via CTRL + D shortcut.</li>
    </ul>

 <h1>🗂️ Files:</h1>
    <table>
        <tr>
            <th>Files</th>
            <th>Description</th>
        </tr>
        <tr>
            <td>main_simple.c</td>
            <td>The main function of the program.</td>
        </tr>
        <tr>
            <td>split.c</td>
            <td>A function responsible for parsing or splitting a line.</td>
        </tr>
        <tr>
            <td>print_env.c</td>
            <td>A function to print the environment.</td>
        </tr>
        <tr>
            <td>shell.h</td>
            <td>Header files for the whole project.</td>
        </tr>
        <tr>
            <td>get_path.c</td>
            <td>A function that returns the path of a command line.</td>
        </tr>
        <tr>
            <td>AUTHORS</td>
            <td>List of authors of the program.</td>
        </tr>
        <tr>
            <td>execute.c</td>
            <td>A function that executes a command line.</td>
        </tr>
    </table>

<h1>✔️ Allowed Functions and System Calls:</h1>
    <pre>
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
    </pre>

<h1>🔭 Compilation and Testing:</h1>
<p>Use our compiler to build the shell:</p>
<pre>
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
</pre>

<p>Testing:</p>
<p>❗Interactive Mode:</p>

<pre>
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
</pre>

<p>❓ Non-Interactive Mode:</p>

<pre>
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
</pre>
<h1>License 👥</h1>
    <p>Authors :</p>
    <p>🚀 Marwen Rebah<br>
    📧 Email: 6863@holbertonstudents.com<br>
    👻 Github: <a href="https://github.com/marwenrebah" target="_blank" rel="noreferrer">https://github.com/marwenrebah</a></p>

<h2 align="center">Resources:</h2>
    <p align="center"> 
        <a href="https://en.wikipedia.org/wiki/Unix_shell" target="_blank" rel="noreferrer">
            <img src="https://upload.wikimedia.org/wikipedia/en/thumb/8/80/Wikipedia-logo-v2.svg/1200px-Wikipedia-logo-v2.svg.png" alt="Unix Shell" width="40" height="40"/> 
        </a> 
    </p>
<h2 align="center">Ken Thompson:</h2>
<p align="center"> 
        <a href="https://en.wikipedia.org/wiki/Unix_shell" target="_blank" rel="noreferrer">Learn About Ken Thompson </a>
    </p>

<p align="center"> 
            <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/8f/Ken_Thompson_%28sitting%29_and_Dennis_Ritchie_at_PDP-11_%282876612463%29.jpg/2557px-Ken_Thompson_%28sitting%29_and_Dennis_Ritchie_at_PDP-11_%282876612463%29.jpg" alt="Ken Thompson" width="800" height="600"/> 
        </a> 
</body>
</html>