#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 * @head: pointer to first node
 * Return: returns the head node’s data, if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int elements = 0;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	elements = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (elements);
}
