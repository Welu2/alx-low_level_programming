#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node to a listint_t
 * list at a given position.
 * @head: pointer to the address of the
 * head of the listint_t list.
 * @idx: index of the listint_t list where the
 * new node should be added - indices start at 0.
 * @n: integer for the new node to contain
 *
 * Return: if the function fails - NULL.
 * otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *wow, *jog = *head;
	unsigned int run;

	wow = malloc(sizeof(listint_t));
	if (wow == NULL)
		return (NULL);

	wow->n = n;

	if (idx == 0)
	{
		wow->next = jog;
		*head = wow;
		return (wow);
	}

	for (run = 0; run < (idx - 1); wow++)
	{
		if (jog == NULL || jog->next == NULL)
			return (NULL);

		jog = jog->next;
	}

	wow->next = jog->next;
	jog->next = wow;

	return (wow);
}
