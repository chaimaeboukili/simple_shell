#include "shell.h"

/**
* print_env - print environment variables
*
*Return: nothing
*/
void print_env(void)
{
int i, k;
char *str = *environ;

for (i = 1; str != NULL; i++)
{
k = 0;
while (str[k])
{
write(1, &str[k], 1);
k++;
}
write(1, "\n", 1);
str = environ[i];
}
}

/**
* change_directory - change directory
* @av: the given arguments
* Return: nothing
*/
void change_directory(char **av)
{
char *pth;
int i, j;
if (av[1] == NULL)
pth = getenv("HOME");
else if (_strcmp(av[1], "-") == 0)
{
pth = getenv("PWD");
for (i = 0; pth[i]; i++)
;
for (j = i; pth[j] != '/'; j--)
;
if (pth[j] == '/')
pth[j] = '\0';
}
else
pth = av[1];
if (chdir(pth) == -1)
perror("lsh");
getenv("PWD");
}

/**
* ft_exit - exit with a status code
* @av: the given arguments
*Return: nothing
*/
void ft_exit(char **av)
{
if (av[1] == NULL)
{
free(av);
exit(0);
}
else
{
free(av);
exit(_atoi(av[1]));
}
}

/**
* exec_builtins - execute the built-ins
* @av: the given arguments
* @index: the index
*Return: nothing
*/
void exec_builtins(char **av, int index)
{

switch (index)
{
case 1:

ft_exit(av);
break;
case 2:
change_directory(av);
break;
case 3:
puts("shell: help: not found");
break;
case 4:
print_env();
break;
default:
break;
}
}

