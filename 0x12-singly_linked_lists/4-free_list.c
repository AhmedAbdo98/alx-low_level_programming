#include <stdlib.h>
#include "lists.h"

/**
 * free_list :_ Frees the linked list
 * @head: list_t the list to be freed
 */
void free_list(list_t *head)
{
	    list_t *t;

	    while (head)
	    { 
		    t = head->next;
		    free(head->str);
		    free(head);
		    head = t;
	    }
}
