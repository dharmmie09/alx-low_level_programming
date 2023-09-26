#include "lists.h"

/**
 * free_listint - the list is free
 * @head: pointer to the start of list
 */
void free_listint(listint_t *head)
{
	listint_t *j;


	while (head != NULL)
	{
		j = head;
		head = head->next;
		free(j);

	}
}
