#include "main.h"
/**
 * _puts - program prints a string followed by a new linet to stdout
 * @str: input string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
