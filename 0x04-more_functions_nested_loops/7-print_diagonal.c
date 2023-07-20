#include "main.h"

/**
 *print_diagonal - print a diagonal shape
 *@n: the number of times the char should be printed
 *Return: always 0
 */
void print_diagonal(int n)
{
	if  (n <= 0)
	{
		_putchar('\n');
		return;
	}

	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
