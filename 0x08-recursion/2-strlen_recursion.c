#include "main.h"

/**
 *_strlen_recursion - to print the lenght of the string
 *@s: the string to be printed
 *Return: Always 0
 */
int _strlen_recursion(char *s)
{
	if (*s != 0)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
