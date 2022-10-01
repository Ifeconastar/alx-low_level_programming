#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: The arguement counter
 * @argv: The arguement values
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv[])
{
(void) argc;

if (argc < 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}

