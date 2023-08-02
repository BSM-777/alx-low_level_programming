#include "main.h"

/**
 *factorial - print the factorial of n
 *@n: the int to be printed
 *Return: -1 if n < 0 , 1 if n = 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
