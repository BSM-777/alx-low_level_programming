#include  "main.h"

/**
 * this porgramme to check if c islower case
 * return 1 if c islower
 * return 0 if c isupper
 */
int _islower(int c)
{
	if (c >= 'a' && c <='z')
		return (1);
	else
		return(0);
}
