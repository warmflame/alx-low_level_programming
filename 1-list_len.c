#include <stddef.h>
#include "lists.h" 

/**
 * list_len - Returns the number of elements in a list_t linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0; // To keep track of the number of elements

	while (h) // Using 0 instead of NULL
	{
		n++;
		h = h->next;
	}

	return (n);
}

