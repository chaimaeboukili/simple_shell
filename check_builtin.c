#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#include "shell.h"

/**
* check_builtin - check to see if the string  is a builtin
* @argvv: string that needs to be checked
*Return: -1 (falure) & >= 1  (success)
*/

int check_builtin(char *argvv)
{
int i = 0;
char *cm[4];

cm[0] = "exit";
cm[1] = "cd";
cm[2] = "help";
cm[3] = "env";
while (i < 4)
{
if (_strcmp(argvv, cm[i]) == 0)
return (i + 1);
i++;
}
return (-1);
}
