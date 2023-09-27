#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - new node is insert at a given position
 * @head: double pointer to the start of the list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: intefer to be included in the new node
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *j;
	listint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	j  = malloc(sizeof(listint_t));
	if (j == NULL)
		return (NULL);
	j->n = n;
	if (idx == 0)
	{

		j->next = *head;
		*head = j;
		return (j);
	}
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)

		{

			free(j);
			return (NULL);
		}
		current = current->next;

	}
	j->next = current->next;
	current->next = j;
	return (j);
}
