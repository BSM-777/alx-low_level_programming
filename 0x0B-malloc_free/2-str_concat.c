#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size1, size2, size;
	char *r;

	size1 = size2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			size1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			size2++;
	}

	size = size1 + size2;
	r = (char *)malloc(sizeof(char) * (size + 1));
	if (r == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		r[i] = s1[i];
	for (j = 0; j < size2; j++, i++)
		r[i] = s2[j];
	r[size] = '\0';

	return (r);
}
