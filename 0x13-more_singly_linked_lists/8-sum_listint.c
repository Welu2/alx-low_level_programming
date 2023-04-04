#include "lists.h"

/**
 * sum_listint - calculate the sum of all
 * the data 9n) of listint_t list.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: if the list is empty - 0.
 * otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int y = 0;

	while (head)
	{
		y += head->n;
		head = head->next;
	}

	return (y);
}


