#include "main.h"
/**
 * _strlen - program returns the length of a string
 * @s: input string
 *
 * Return: length of string s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
