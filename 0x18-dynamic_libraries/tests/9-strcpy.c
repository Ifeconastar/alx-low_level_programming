#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - program copies string pointed by src to dest
 * @dest: destination address
 * @src: source address
 *
 * Return: destination address
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
