#include "shell.h"

/**
 * find_path - find the command's path
 * @av: the command that looks for its path
 *Return: the full path of the command (string)
 */
char *find_path(char *av)
{
	char *path = NULL, *token = NULL, *cpath = NULL;
	int i = 0, len = 0;
	struct stat sfile;

	path = _getenv("PATH");
	for (len = 0; path[len]; len++)
		;
	cpath = malloc(sizeof(char) * len + 1);

	for (i = 0; path[i]; i++)
		cpath[i] = path[i];
	cpath[i] = '\0';

	token = strtok(cpath, ":");
	token = concat_all(token, "/");
	token = concat_all(token, av);
	while (token != NULL)
	{
		if (stat(token, &sfile) == 0)
			return (token);

		token = strtok(NULL, ":");
		if (token != NULL)
		{
			token = concat_all(token, "/");
			token = concat_all(token, av);
		}

	}
free(token);
free(cpath);
	return (NULL);
}
