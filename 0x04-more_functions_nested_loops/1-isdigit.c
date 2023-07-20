#include "main.h"

/**
 * _isdigit - to check if the char is digit
 *
 * @c: the char to check it
 * Return: 1 if the char is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
