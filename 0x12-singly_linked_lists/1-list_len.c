#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns no elements in a linked list
 * @h: pointer to list_t list
 *
 * Return: no elements at h
 */
size_t list_len(const list_t *h)
{
	   size_t sz = 0;
 
	   while (h)
	   {
		    sz++;
		    h = h->next;
	   }
	   return (sz);
}
