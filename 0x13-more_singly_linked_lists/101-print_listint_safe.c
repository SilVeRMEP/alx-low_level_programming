#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp, *curr;

	if (head == NULL)
		exit(98);

	curr = head;

	while (curr != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)curr, curr->n);
		temp = curr;
		curr = curr->next;
		if (curr >= temp)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			break;
		}
	}

	return (count);
}
