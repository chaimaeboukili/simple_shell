#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#include "shell.h"


/**
* _realloc - reallocates a memory space using malloc and free.
* @ptr: pointer to the previously allocated memory
* @old_size: the size of the old allocated space (for ptr)
* @new_size: the size of the newly allocated space
*
* Return: pointer or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *pointer;
unsigned int i, max = new_size;
char *old_pointer = ptr;

if (ptr == NULL)
{
pointer = malloc(new_size);
return (pointer);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);

pointer = malloc(new_size);
if (pointer == NULL)
return (NULL);
if (new_size > old_size)
max = old_size;
for (i = 0; i < max; i++)
pointer[i] = old_pointer[i];
free(ptr);
return (pointer);
}
