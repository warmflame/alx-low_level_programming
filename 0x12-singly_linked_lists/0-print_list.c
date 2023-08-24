#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0; /* To keep track of the number of nodes */

    while (h != 0)
    {
        if (h->str == 0)
            printf("[0] (0)\n");
        else
            printf("[%u] %s\n", h->len, h->str);

        h = h->next;
        s++;
    }

    return (s);
}

