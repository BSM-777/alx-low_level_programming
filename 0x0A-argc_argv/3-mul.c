#include <stdio.h>
#include <stdlib.h>

/**
 *main -  a program that multiplies two numbers
 *@argc: int
 *@argv: char
 *@num1, num2: integers
 *Return: "Error" if argc != 3 and 1, else multi the two numbers
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}
	else
	{
	int result;

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
	}
}
