#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node
 * of a listint_t linked list.
 * @head: Pointer to the head node of the list.
 * @index: Index of the node to retrieve (starting at 0).
 *
 * Return: Pointer to the nth node,
 * or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = head;
	for (i = 0; i < index && node != NULL; i++)
		node = node->next;

	return (node);
}
