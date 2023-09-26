#include "lists.h"

/**
 * listint_len - number of the element in a list are return
 * @h: pointer to the list
 * Return: as 0
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *j;
	size_t i = 0;
	

	j = h;


	while (j != NULL)
	{
		j = j->next;
		i++;
	}
	return (i);
}
