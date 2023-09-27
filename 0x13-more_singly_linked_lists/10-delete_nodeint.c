#include "lists.h"

/**
 * delete_nodeint_at_index - node delete at given index
 * @head: address of pointer to first node
 * @index: index of node to delete
 *
 * Return: as 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (0);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (0);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			prev_node->next = node->next;
			free(node);
			return (0);
		}
		i++;
		prev_node = node;
		node = node->next;
	}
	return (0);
}
