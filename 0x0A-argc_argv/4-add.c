#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the addition of positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if argc=0, Error if arg is not a positive int, otherwise print sum
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *a;

	while (--argc)
	{
		for (a = argv[argc]; *a; a++)
			if (*a < '0' || *a > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
