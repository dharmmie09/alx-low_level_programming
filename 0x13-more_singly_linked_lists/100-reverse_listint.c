#include "lists.h"
/**
 * reverse_listint - linked list is reversed
 * @head: pointer to the strat of a list
 * Return: as 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		*head = next;

	}
	*head = prev;
	return (*head);
}
