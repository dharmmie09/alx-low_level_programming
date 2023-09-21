#include "lists.h"

/**
 * add_node -is to add a node start list
 * @head: address of the pointer to head node
 * @str: str field of node
 *
 * Return: as 0 always
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *j = malloc(sizeof(list_t));

	if (!head || !j)
		return (NULL)

	if (str)
	{
		j->str = strdup(str);
		if (!j->str)
		{
		
			free(j);
			return (NULL);
		
		}

		j->len - strlen(j->str);
	}

	j->nest = *head;
	*head = j;
	return (j);	
}
