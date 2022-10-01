#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: The arguement counter
 * @argv: The arguement values
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i, j, mul;

if (argc <= 2)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
j = atoi(argv[2]);
mul = i *j;

printf("%d\n", mul);
return (0);
}
