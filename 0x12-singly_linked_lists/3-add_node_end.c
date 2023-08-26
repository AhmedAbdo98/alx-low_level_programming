#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end : adds a new node at the end of the linked list
 * @head: double pointer to list_t list
 * @str: string to put into the new node
 *
 * Return: address of the new element or NULL if it does not work
 */
list_t *add_node_end(list_t **head, const char *str)
{
	  list_t *n;
	  list_t *t = *head;
	  unsigned int len = 0;

	  while (str[l])
		   l++;

	  new = malloc(sizeof(list_t));
	  if (!n)
		  return (NULL);

	  n->str = strdup(str);
	  n->l = l;
	  n->next = NULL;

	  if (*head == NULL)
	  {
		   *head = n;
		   return (n);
	  }  

	  while (t->next)
		t = t->next;

	  t->next = n;

	return (n);
}

