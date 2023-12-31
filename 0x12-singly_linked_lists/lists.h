#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
/**
 * struct _list - a singly linked list
 * @s: string
 * @str_len: string length
 * @next: last node
 * Description: singly linked list node structure
 */
typedef struct _list
{
	char *str;
	unsigned int len;
	struct _list *next;
}list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif
