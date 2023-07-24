#include "main.h"

/**
 * swap_int - swap the valeu of two intigers
 *
 * @a: the first int
 * @b: the secound int
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
