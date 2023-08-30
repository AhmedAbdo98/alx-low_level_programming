#include "lists.h"

/**
 * insert_nodeint_at_index - insrt a new node in the linked list at a given pos
 * @head: Pointer to the first node in the list
 * @idx: idx where the new node is added
 * @n: Data insert in the new node
 * Return: Pointer to the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x;
listint_t *neww;
listint_t *tmp = *head;
neww = malloc(sizeof(listint_t));
if (!neww || !head)
return (NULL);
neww->n = n;
neww->next = NULL;
if (idx == 0)
{
neww->next = *head;
*head = neww;
return (neww);
}
for (x = 0; tmp && x < idx; x++)
{
if (x == idx - 1)
{
neww->next = tmp->next;
tmp->next = neww;
return (neww);
}
else
tmp = tmp->next;
}
return (NULL);
}
