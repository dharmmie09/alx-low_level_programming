#include "lists.h"

/**
 * print_list - is the linked list prints
 * @h: pointer to first node
 *
 * Return: as 0 always
 */
size_t print_list(const list_t *h)
{
	size_t j  = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		j++;
	}
	return (j);
}
