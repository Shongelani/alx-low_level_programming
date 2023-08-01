#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index index
 * of a listint_t linked list
 * @head: first node of a linked list
 * @index: the index of the node that should be delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *curr = NULL;
	unsigned int counter = 0;

	for (counter = 0; tmp && counter < index; counter++)
	{
		curr = tmp;
		tmp = tmp->next;
	}
	if (counter < index || tmp == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = tmp->next;
	}
	else
	{
		curr->next = tmp->next;
	}
	free(tmp);

	return (1);
}
