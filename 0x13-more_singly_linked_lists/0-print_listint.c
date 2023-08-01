#include "lists.h"
/**
 * print_listint -  a function that prints all the elements of a listint_t list
 * @h: linked list of type listint_t list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}
	return (elements);
}
