#include "shell.h"

/**
* _getenv - to get an environment variable
* @env: the environment in args
* Return: pointer to char
*/

char *_getenv(char *env)
{
size_t run = 0;

	while (env[run])
	{
		write(STDOUT_FILENO, env[run], _strlen(env[run]));
		write(STDOUT_FILENO, "\n", 1);
		run++;
	}
}
