#include  "main.h"

/**
 *_islower: to check if char is lowercase
 *
 * Return: 1 if char is lowercase, 0 otherwise
 * @c: is the char to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
