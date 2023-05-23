#include <stdlib.h>
#include "shell.h"

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
int i, diff = 0;
for (i = 0; str1[i] || str2[i]; i++)
{
if (str1[i] != str2[i])
{
diff = str1[i] - str2[i];
break;
}
}
return (diff);
}

/**
 * concat_all - concatenate 2 strings
 * @str1: first string
 * @str2: second string
 *Return: the concatenated string
 */
char *concat_all(char *str1, char *str2)
{
	char *concat_str = NULL;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	for (len1 = 0; str1[len1]; len1++)
		;

	for (len2 = 0; str2[len2]; len2++)
		;

	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!concat_str)
		return (NULL);

	for (i = 0; str1[i]; i++)
		concat_str[i] = str1[i];
	j = i;

	for (i = 0; str2[i]; i++)
		concat_str[j + i] = str2[i];
	j = j + i;

	concat_str[j] = '\0';

	return (concat_str);
}
