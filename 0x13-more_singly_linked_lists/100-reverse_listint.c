#include "lists.h"
/**
 * reverse_listint - Rvrse a linked list
 * @head: Pointer to the frst node in the list
 * Return: Pointer to the frst node in a new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
