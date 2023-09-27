#include "lists.h"

/**
 * free_listint2 - set head to NULL and frees a list
 * @head: double pointer to start of the list
 * Return: aS 0
 */
void free_listint2(listint_t **head)
{
	listint_t *j;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		j = (*head)->next;
		free(*head);
		*head = j;
	}
	*head = NULL;
}
