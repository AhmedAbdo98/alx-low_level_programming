#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a crtn index in the linked list
 * @head: frst node in the linked list
 * @index: index of node to return
 * Return: Pointer to the node we are looking for or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;
listint_t *tmp = head;
while (tmp && x < index)
{
tmp = tmp->next;
x++;
}
return (tmp ? tmp : NULL);
}
