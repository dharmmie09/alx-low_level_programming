#include "lists.h"

/**
 * list_len - is the length that detrmines the linked list
 * @h: pointer to first node
 *
 * Return: as 0 always
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;

		j++;
	}
	return (j);
}
