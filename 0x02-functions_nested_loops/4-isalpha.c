#include "main.h"

/**
 *_isalpha - checked if char is alphabet 
 *@c: is the char to be checked
 *Return: 1 if is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
