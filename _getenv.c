#include "shell.h"

/**
* _getenv - to get an environment variable
* @env: the environment in args
* Return: pointer to char
*/

char *_getenv(char **env)
{
int i, j;
char *val;

if (!env)
return (0);
for (i = 0; environ[i]; i++)
{
j = 0;
if (env[j] == environ[i][j])
{
while (env[j])
{
if (env[j] != environ[i][j])
break;
j++;
}
if (env[j] == '\0')
{
val = (environ[i] + j + 1);
return (val);
}
}
}
return (0);
}
