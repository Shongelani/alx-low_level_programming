#include "lists.h"
/**
 * get_nodeint_at_index - a a function that returns the nth node of a
 * listint_t linked list.
 * @head: first node
 * @index: the index of the node, starting at 0
 * Return: returns the nth node, or null if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head != NULL && counter < index)
	{
		head = head->next;
		counter++;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	else
		return (head);
}
