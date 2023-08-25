#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -it adds a new node at the beginning of the linked list
 * @head: double pointer to the list_t 
 * @str: New string to add in the node
 *
 * Return: The address of the new element or NULL if it deos not work
 */

list_t *add_node(list_t **head, const char *str)
{
	  list_t *n;
	  unsigned int l = 0;

	  while (str[l])
		  l++;

	  n = malloc(sizeof(list_t));
	  if (!n)
		  return (NULL);

 	  n->str = strdup(str);
	  n->len = len;
	  n->next = (*head);
	  (*head) = n;

	  return (*head);
}
