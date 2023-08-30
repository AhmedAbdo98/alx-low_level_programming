#include "lists.h"
/**
 * reverse_listint - Rvrse a linked list
 * @head: Pointer to the frst node in the list
 * Return: Pointer to the frst node in a new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prv = NULL;
listint_t *nxt = NULL;
while (*head)
{
nxt = (*head)->nxt;
(*head)->nxt = prv;
prv = *head;
*head = nxt;
}
*head = prv;
return (*head);
}
