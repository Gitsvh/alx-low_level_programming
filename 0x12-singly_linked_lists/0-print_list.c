#include "lists.h"
#include <stdio.h>

/**
 * Print_list _ Prints all the elelments of a list-t list.
 * @h: singly linked list
 *
 * Return: number of element in list.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nill\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
