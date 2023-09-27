#include "lists.h"
/**
 * get_nodeint_at_index - the nth node of linked lis is returned
 * @head: is the pointer to start list
 * @index: index of the code tart sat 0
 * Return: as 0
 */
listint_t *get_nodeint_at_indes(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index; j++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
