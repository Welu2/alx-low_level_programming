#include "lists.h"

/**
 * add_nodeint - adds new node at he beginning
 * of a listint_t list
 * @head: a pointer to the address of the
 * head of the listint_t list
 * @n: the integer for the new node to contain
 *
 * Return: if the function fails - NULL.
 * otherwise - the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *wow;

	wow = malloc(sizeof(listint_t));
	if (wow == NULL)
		return (NULL);

	wow->n = n;
	wow->next = *head;

	*head = wow;

	return (wow);
}
