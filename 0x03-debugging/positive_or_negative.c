#include "main.h"

/**
 *positive_or_negtive - Testing is number positive or negative
 *
 * Return: positif if i>0
 * negatif if n < 0
 * is zero if i = 0
 */
void positive_or_negative(int i)
{
	if (i > 0)

		printf("%d is positive\n", i);

	else if (i == 0)

		printf("%d is zero\n", i);

	else
		printf("%d is negative\n", i);
}
