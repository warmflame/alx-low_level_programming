#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t linked list.
 * @h: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
