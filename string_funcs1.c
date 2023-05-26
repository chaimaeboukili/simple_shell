#include "shell.h"

/**
 *_strncmp -  function that compares two strings.
 *@s1: string one
 *@s2: string two
 *@n: number of characters
 * Return: diference
 */
size_t _strncmp(char *s1, char *s2, size_t n)
{
	size_t i, j;

	for (j = 0; s1[j] != '\0' && j < n; j++)
	{
		i = s1[j] - s2[j];

		if (i != 0)
		{
			return (i);
		}
	}
	return (0);
}

/**
 * _strcat - cantenates two strings
 *
 * @dest: Destination string
 *
 * @src: Origin string
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;

	}
	dest[i] = '\0';
return (dest);
}

/**
 * _strlen - calculate the length of a string
 * @str: the string
 * Return: the calculated length
 */
int _strlen(char *str)
{
int i;
for (i = 0; str[i]; i++)
;
return (i);
}

/**
 * _atoi - transform a string to an int
 * @str: the given string
 * Return: int format
 */
int _atoi(char *str)
{
	int i, d, sign = 1;

	i = d = 0;
	while ((*(str + i) < '0' || *(str + i) > '9') && (*(str + i) != '\0'))
	{
		if (*(str + i) == '-')
			sign *= -1;
		i++;
	}
	while ((*(str + i) >= '0') && (*(str + i) <= '9'))
	{
		d = d * 10 + sign * (*(str + i) - '0');
		i++;
	}
	return (d);
}

/**
 * _strcmp - comparing 2 strings
 * @str1: first string
 * @str2: second string
 * Return: the difference
 */
int _strcmp(char *str1, char *str2)
{
int i = 0;
	int val;

	while (str1[i] != 0 && str2[i] != 0 && str1[i] == str2[i])
		i++;
val = str1[i] - str2[i];
return (val);
}
