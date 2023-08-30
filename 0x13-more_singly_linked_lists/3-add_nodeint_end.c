#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a linked list
 * @head: Pointer to the first element in the list
 * @n: Data to insert in the new element
 * Return: Pointer to the new node or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *neww;
listint_t *tmp = *head;
neww = malloc(sizeof(listint_t));
if (!neww)
return (NULL);
neww->n = n;
neww->next = NULL;
if (*head == NULL)
{
*head = neww;
return (neww);
}
while (tmp->next)
tmp = tmp->next;
tmp->next = neww;
return (neww);
}
