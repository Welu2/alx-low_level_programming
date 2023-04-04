#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list.
 * @head: pointer to the address of the
 * head of the listint_t list.
 *
 * Return: if the linked list empty - 0.
 * otherwise - the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int run;

	if (*head == NULL)
		return (0);

	tmp = *head;
	run = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (run);
}
