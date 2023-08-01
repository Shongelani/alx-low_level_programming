#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new node at a
 * given position
 * @head: first node of listin_t linked list
 * @idx: the index of the list where the new node should be added
 * @n: node to be inserted in the given index
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;
	unsigned int counter;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	counter = 0;
	while (tmp && counter < idx)
	{
		if (counter == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		else
		{
			tmp = tmp->next;
		}
		counter++;
	}
	return (NULL);
}
