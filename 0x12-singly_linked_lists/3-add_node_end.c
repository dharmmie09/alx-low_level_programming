#include "lists.h"

/**
 * add _node_end - end of the list adds a node
 * @head: address of pointer to head nod
 * @str: str field of node
 *
 * Return: as 0 always
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i = malloc(sizeof(list_t));
	list_t *j = *head;

	if (!head || !i)
		return (NULL);
	if (str)
	{
		i->str = strdup(str);
		if (!i->str)
		{
			free(i);
			return (NULL);
		}
		i->len = strlen(i->str);
	}
	if (j)
	{
		while (j->next)
			j = j->next;
		j->next = i;
	}
	
	else
		*head = i;
	return (i);
}
