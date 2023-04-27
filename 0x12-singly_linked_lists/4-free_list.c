#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to head of list_t list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current, *temp;

	if (head == NULL)
		return;

	current = head;
	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
