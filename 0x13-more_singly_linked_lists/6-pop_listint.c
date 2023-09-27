#include "lists.h"

/**
 * pop_listint - links list of a head node is delete
 * @head: double pointer to start the list
 * Return: as 0
 */
int pop_listint(listint_t **head)
{
	listint_t *j;
	int n;


	if (*head == NULL)
		return(0);
	j = *head;
	n = j->n;
	*head = j->next;
	free(j);


	return (n);
}
