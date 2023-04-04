#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a
 * given index of listint_t list
 * @head: pointer to the address of the
 * head of the listint_t list.
 * @index: index of the node to be deleted - indices start at 0.
 *
 * Return: on success - 1.
 * on failure - -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *lo = *head;
	unsigned int k;

	if (lo == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(lo);
		return (1);
	}

	for (k = 0; k < (index - 1); k++)
	{
		if (lo->next == NULL)
			return (-1);

		lo = lo->next;
	}

	tmp = lo->next;
	lo->next = tmp->next;
	free(tmp);
	return (1);
}
