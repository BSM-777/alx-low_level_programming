#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints list.
 * @h: param list
 * Return: struct
 */

size_t print_list(const list_t *h)
{
	size_t l_node = 0;

	while (h != NULL)
	{
		switch (h->str == NULL)
		{
			case 1:
				printf("[%d] %s\n", 0, "(nil)");
				break;
			case 0:
				printf("[%d] %s\n", h->len, h->str);
				break;
		}

		h = h->next;
		l_node++;
	}

	return (l_node);
}
