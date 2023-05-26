#include "shell.h"

/**
 * concat_all - concatenate 2 strings
 * @str1: first string
 * @str2: second string
 * Return: the concatenated string
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
		concat_str[j + i] = str2[j];
	j = j + i;

	concat_str[j] = '\0';

	return (concat_str);
}

/**
 * _strcpy - copies the string from the source into destination
 * @dest: destination of the copy
 * @src: source of the copy
 * Return: char pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i + 1] = 0;
	return (dest);
}
