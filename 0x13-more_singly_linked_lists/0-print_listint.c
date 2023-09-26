#include "lists.h"
#include <stdio.h>

/**
 * print_listint - all elements of a listint_t list is printed
 * @h: pointer to list
 * Return: as 0
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *j;
	size_t i = 0;

	j = h;


	while (j != NULL)
	{
		printf("%d\n", j->n);
		j = j->next;
		i++;
	}
	return (i);
}
