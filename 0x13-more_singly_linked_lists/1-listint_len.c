#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked
 * listint_t list.
 * @h: linked list of type listint_t list
 * Return: returns the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
