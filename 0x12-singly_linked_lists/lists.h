#ifndef LISTS_H
#define LISTS_H
/**
 * Struct list_s - Singly linked list
 * @Str: string - (malloc'ed string)
 * @Len: length of the string
 * @Next: points to the next node
 * Descrip::: singly linked list node structure
 * For Holberton proj
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
