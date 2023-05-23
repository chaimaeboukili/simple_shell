simple_shell group project

DESCRIPTION 
------------------------

This project is about creating our own simple UNIX command interpreter. The program must have the exact same output as sh (/bin/sh) as well as the exact same error output. It's a project written by Chaimae BOUKILI and Abdellatif ELbouziady.

COMPILATION
-----------------------------

We can compile the files using this command to check that there are no errors:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

USAGE
----------------

Enter the interactive mode after compilation:

$ ./hsh
 simple@shell $ /bin/ls
 simple@shell $
 simple@shell $ exit
$


LIST OF ALLOWED FUNCTIONS AND SYSTEM CALLS
----------------------------------------------------

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

AUTHORS
--------------------------

-Abdellatif ELBOUZIADY

-Chaimae BOUKILI
