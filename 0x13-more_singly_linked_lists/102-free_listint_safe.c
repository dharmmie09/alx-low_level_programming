#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - a listint list is free,even if it has a loop
 *
 * @head: head of list
 *
 * Return: as 0
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *i;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		len++;
		if ((void *)*h > (void *)(*h)->next && (*h)->next != NULL)
		{
			i = (*h)->next;
			free(*h);
			*h = i;
			len++;
		}
		else
		{
			i = (*h)->next;
			free(*h);
			*h = i;
		}
	}

	*h = NULL;

	return (len);
}
