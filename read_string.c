#include <stdio.h>
#include "shell.h"
#include <string.h>

/**
* read_string - read a string from input
*
* Return: string to read
*/

char *read_string(void)
{
char *string = NULL;
size_t length = 0;
int read;

read = getline(&line, &length, stdin);
if (read == -1)
{
if (isatty(STDIN_FILENO))
write(1, "\n", 1);
exit(0);
}
string = strtok(line, "\n");

return (string);
}
