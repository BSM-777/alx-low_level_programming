#include "main.h"

/**
 * _puts_recursion - to puts a string
 *@s: the string to puts
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
