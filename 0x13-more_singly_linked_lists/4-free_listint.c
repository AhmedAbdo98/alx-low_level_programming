#include "lists.h"


/**
 * free_listint - Make a linked list free
 * @head: listint_t List to be free
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
