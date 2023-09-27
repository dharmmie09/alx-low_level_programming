#include "lists.h"

/**
 * delete_nodeint_at_index - node deletes at given index
 * @head: address of pointer to first node
 * @index: index of node to delete
 *
 * Return: as 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index
{
	listint_t *node, *prev_node;
	unsigned int j = 0;


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
		if (j == index)
		{
			prev_node->next = node->next;
			free(node);
			return (0);
		)
		!++;
		prev_node = node;
		node = node->next;
	}
	return (0);
}
