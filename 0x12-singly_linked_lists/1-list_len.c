#include <stddef.h>
#include "lists.h" // Include your header file that defines the list_t structure

/**
 * list_len - Returns the number of elements in a list_t linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0; // To keep track of the number of elements

	while (h != 0) // Using 0 instead of NULL
	{
		h = h->next;
		count++;
	}

	return (count);
}

