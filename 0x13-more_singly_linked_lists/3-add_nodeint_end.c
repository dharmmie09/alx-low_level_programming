#include "lists.h"

/**
 * add_nodeint_end - at the end of the lista new node is started
 * @head: double pointer at the start of list
 * @n: integer to  be included in the new node
 * Return; as 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *j;
	listint_t *i = *head;

	j = malloc(sizeof (listint_t));
	if (j == NULL)

		return (NULL);

	j->n = n;
	j->next = NULL;

	if (*head == NULL)

	{ 
		*head = j;
		return (j);
	
	}
	while (i->next != NULL)
	{
		i = i->next;
	}
	i->next = j;
	return (j);
}
