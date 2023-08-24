#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> // For size_t

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Prints all elements of a list_t linked list */
size_t print_list(const list_t *h);

/* Returns the length of a string */
unsigned int _strlen(const char *str);

/* Adds a new node at the beginning of a list_t linked list */
list_t *add_node(list_t **head, const char *str);

/* Adds a new node at the end of a list_t linked list */
list_t *add_node_end(list_t **head, const char *str);

/* Frees a list_t linked list */
void free_list(list_t *head);

/* Prints a character */
int _putchar(char c);

#endif /* LISTS_H */

