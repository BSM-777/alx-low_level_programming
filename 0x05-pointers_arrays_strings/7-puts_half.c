#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int ln, u, i;

	ln = 0;

	while (str[ln] != '\0')
	{
		ln++;
	}

	if (ln % 2 == 0)
	{
		for (i = ln / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (ln % 2)
	{
		for (u = (ln - 1) / 2; u < ln - 1; u++)
		{
			_putchar(str[u + 1]);
		}
	}
	_putchar('\n');
}
