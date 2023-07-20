#include  "main.h"

/**
 *_isupper - check if char is uppercase
 *
 * Return: 1 if char is uppercase, 0 otherwise
 * @c: is the char to be checked
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
