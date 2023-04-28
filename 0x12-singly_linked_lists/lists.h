#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - the singly linked list
 * @len: the length of the string
 * @next: the points to the next node
 * @str: the string - the string that has been malloc'ed
 *
 * Description: the singly linked list node structure for 
 * the Holberton project
 */
typedef struct list_s
{
	unsigned int len;
	char *str;
	struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
void free_list(list_t *head);

#endif
