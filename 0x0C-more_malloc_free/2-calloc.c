#include <stdlib.h>

/**
 * _calloc - Allocate memory for array of nmemb elements of size bytes
 * @nmemb: Number of elemnts
 * @size: Size in bytes of elements
 *
 * Return: Pointer to new memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int a_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a_size = nmemb * size;
	a = malloc(a_size);
	if (a == NULL)
		return (NULL);
	while (i < a_size)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
