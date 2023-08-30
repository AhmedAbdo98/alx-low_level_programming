#include "lists.h"

/**
 * add_nodeint - Adds a new node at the begin of a linked list
 * @head: Pointer to the first node in the list
 * @n: Data to insert in that new node
 * Return:Pointer to the new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *neww;
neww = malloc(sizeof(listint_t));
if (!neww)
return (NULL);
neww->n = n;
neww->next = *head;
*head = neww;
return (neww);
}
