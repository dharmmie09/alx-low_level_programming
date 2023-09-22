#include "lists.h"

/**
 *  free_list -list of all free nodes
 *  @head: pointer to head node
 *
 *  Return: as 0
 */
void free_list(list_t *head)
{
	list_t *j, *i;
	
	if (!head)
		return;

	j = head;
	while (j)
	{
		i = j->next;
		free(j->str);
		free(j);
		j = i;
	}
}
