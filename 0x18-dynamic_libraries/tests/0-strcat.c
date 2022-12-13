#include "main.h"
/**
 * _strcat - function concatenates two strings.
 * @dest: A pointer to the string to be concatenated upon
 * @src: source string to be appended to @dest
 *
 * Return: a point to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index]; index++)
		dest[dest_length++] = src[index];

	return (dest);
}
