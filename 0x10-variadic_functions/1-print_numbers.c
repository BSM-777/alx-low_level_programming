#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: separator between numbers
 * @n: number of parameters
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num_list;

	va_start(num_list, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(num_list, int));
		if (i < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(num_list);
}
