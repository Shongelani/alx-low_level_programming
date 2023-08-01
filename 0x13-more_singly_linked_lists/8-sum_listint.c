#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data
 * (n) of a listint_t linked list
 * @head: first node in the linked list
 * Return: sum of all data in the linked list, or 0 if list empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum =  sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
