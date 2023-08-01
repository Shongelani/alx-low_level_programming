#include "lists.h"
/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: pointer to the listint_t list to be freed
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
	{
		return;
	}
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
