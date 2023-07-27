#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list
 * @str: string to add to the node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	while (str[length])
	{
		length++;
	}
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
