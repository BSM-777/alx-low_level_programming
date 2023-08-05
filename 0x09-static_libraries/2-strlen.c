#include "main.h"

/**
 * _strlen - Return the lenght of a string
 *
 * @s: the string to be returned
 * Return: the lenght of str
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
