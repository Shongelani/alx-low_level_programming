#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end of a
 * listint_t list.
 * @head: pointer to the new node
 * @n: input
 * Return: he address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;

	return (new_node);
}
