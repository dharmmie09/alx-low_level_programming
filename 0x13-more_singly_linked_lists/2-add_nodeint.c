#include "lists.h"

/**
 * add_nodeint - it adds a new node at the start of list
 * @head: double pointer to start the list
 * @n: integer to be include the new node
 * Return: as 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *j;


	j = malloc(sizeof(listint_t));
	if (j == NULL)

	j->n = n;

	j->next = *head;

	*head = j;

	return (j);
}
