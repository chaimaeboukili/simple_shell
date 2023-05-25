#include "shell.h"
#include <errno.h>
int _help(char **args);
int _ctrld(char **args);


/*
 * List of commands, followed by their functions.
 */
char *builtin_str[] = {"help", "^D"};

int (*builtin_func[]) (char **) = {&_help, &_ctrld};

/**
 * _num_builtins - the size
 * Return: size
 */

int _num_builtins(void)
{
	return (sizeof(builtin_str) / sizeof(char *));
}
/**
 * _cd - to change directories
 * @args: List of args.  args[0] is "cd".  args[1] is the directory.
 * Return: 1 on success
 */

/**
 * _help - the help for the shell
 * @args: List of args.  Not examined.
 * Return: Always returns 1, to continue executing.
 */
int _help(char **args)
{
	int i;

	printf("you need help\n");
	printf("If you need help, call 911-help\n");
	(void)args;
	for (i = 0; i < _num_builtins(); i++)
	{
		printf("  %s\n", builtin_str[i]);
	}

	return (1);
}


/**
 * _ctrld -  to handle "^D" call
 * @args: List of args.
 * Return: Always returns 0, to terminate execution.
 */
int _ctrld(char **args)
{
	(void)args;
	free(args);
	return (200);
}

/**
 *_fork_fun - foo that create a fork.
 *@arg: Command and values path.
 *@av: Has the name of our program.
 *@env: Environment
 *@lineptr: Command line for the user.
 *@np: ID of proces.
 *@c: Checker add new test
 *Return: 0 success
 */

int _fork_fun(char **arg, char **av, char **env, char *lineptr, int np, int c)
{
	pid_t child;
	int status, i = 0;
	char *format = "%s: %d: %s: not found\n";

	if (arg[0] == NULL)
		return (1);
	for (i = 0; i < _num_builtins(); i++)
	{
		if (_strcmp(arg[0], builtin_str[i]) == 0)
			return (builtin_func[i](arg));
	}
	child = fork();
	if (child == 0)
	{
		if (execve(arg[0], arg, env) == -1)
		{
			fprintf(stderr, format, av[0], np, arg[0]);
			if (!c)
				free(arg[0]);
			free(arg);
			free(lineptr);
			exit(errno);
		}
	}
	else
	{
		wait(&status);
		return (status);
	}
	return (0);
}
