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
char *lineptr = NULL;
	size_t charter_user = 0;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

	if (getline(&lineptr, &charter_user, stdin) == -1)
	{
		free(lineptr);
		return (NULL);
	}

	return (lineptr);
}
