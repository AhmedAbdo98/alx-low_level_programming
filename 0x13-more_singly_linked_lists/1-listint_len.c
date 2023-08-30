#include "lists.h"

/**
 * listint_len - return the n.o elements in a linked lists
 * @h: Linked list type listint_t to traverse
 * Return: n.o nodes
 */
size_t listint_len(const listint_t *h)
{
size_t n = 0;
while (h)
{
n++;
h = h->next;
}
return (n);
}
