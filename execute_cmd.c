#include "shell.h"

/**
* execute_cmd - execute command
* @argvv: array of strings that needs to be checked
*Return: void
*/

void execute_cmd(char **argvv)
{
<<<<<<< HEAD
	int pid = 0;

	if (!argvv || !argvv[0])
	return;
	pid = fork();
	if (pid == 0)
	{
		if (execve(argvv[0], argvv, NULL) == -1)
		{
		perror("hsh");
		exit(0);
		}
	}
	else if (pid == -1)
	{
		perror("hsh error - child is -1");
		exit(-1);
	}
	else
	wait(NULL);
=======
int pid = 0;

if (!argvv || !argvv[0])
return;
pid = fork();
if (pid == 0)
{
if (execve(argvv[0], argvv, NULL) == -1)
{
perror("hsh");
exit(0);
}
}
else if (pid == -1)
{
perror("hsh error - child is -1");
exit(-1);
}
else
wait(NULL);
>>>>>>> 6abbfb5b11e31fef609ab24864f5c2c2ce04b023
}
