#include "shell.h"

/**
 * find_path - find the command's path
 * @av: the command that looks for its path
 *Return: the full path of the command (string)
 */
char *find_path(char *av)
{
	size_t index = 0, var = 0, count = 5;
	char *path = NULL;

	for (index = 0; _strcmp(env[index], "PATH=", 5); index++)
		;
	if (env[index] == NULL)
		return (NULL);

	for (count = 5; env[index][var]; var++, count++)
		;
	path = malloc(sizeof(char) * (count + 1));

	if (path == NULL)
		return (NULL);

	for (var = 5, count = 0; env[index][var]; var++, count++)
		path[count] = env[index][var];

	path[count] = '\0';
	return (path);
}
