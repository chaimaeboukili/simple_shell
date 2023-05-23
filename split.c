#include "shell.h"

/**
* split - split a string
* @str: the given string
* @buffer: buffer size
*Return: the string
*/
char **split(char *str, int buffer)
{
char *tkn = NULL;
int i = 0;
char **av = malloc(sizeof(char *) * buffer);
if (!av)
{
write(STDERR_FILENO, "hsh: allocation error\n", 22);
free(av);
exit(0);
}

tkn = strtok(str, " ");
while (tkn != NULL)
{
av[i] = tkn;
tkn = strtok(NULL, " ");
i++;
if (i >= buffer)
{
buffer += BUFFER_LEN;
av = _realloc(av, sizeof(av), buffer *sizeof(char *));
if (!av)
{
write(STDERR_FILENO, "hsh: allocation error\n", 22);
exit(0);
}
}

}
av[i] = NULL;

return (av);
}

