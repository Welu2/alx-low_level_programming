#include "lists.h"

/**
 * add_nodeint_end - adds new node at the
 * end of listint_t list.
 * @head: a pointer to the address of
 * the head of the listint_t list.
 * @n: integer for the new node to contain
 *
 * Return: if the fuction fails - NULL.
 * otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *wow, *boom;

	wow = malloc(sizeof(listint_t));
	if (wow == NULL)
		return (NULL);

	wow->n = n;
	wow->next = NULL;

	if (*head == NULL)
		*head = wow;

	else
	{
		boom = *head;
		while (boom->next != NULL)
			boom = boom->next;
		boom->next = wow;
	}

	return (*head);
}
