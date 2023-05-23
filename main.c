#include "shell.h"
#include <signal.h>

/**
* signal_handler - handle the interrupt signal (Ctrl+C)
* @signal_num: the signal number
* Return: nothing
*/
void signal_handler(int signal_num)
{
if (signal_num == SIGINT)
write(1, "\n$ ", 3);
}

/**
*main - main
*
*Return: 0 on success
*/
int main(void)
{
int buffer = BUFFER_LEN, i;
char *line;
char **av;
struct stat f;

signal(SIGINT, signal_handler);
while (1)
{
if (isatty(STDIN_FILENO) == 1)
write(STDOUT_FILENO, "$ ", 2);

line = read_string();

av = split(line, buffer);
if (!av || av[0] == NULL)
{
execute_cmd(av);
}
else
{
i = check_builtin(av[0]);
if (i >= 0)
exec_builtins(av, i);
else
{
if (stat(av[0], &f) != 0)
{
av[0] = find_path(av[0]);
}

execute_cmd(av);
}
}
free(av);
}
return (0);
}
