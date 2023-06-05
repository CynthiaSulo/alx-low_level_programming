#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *loop_node = NULL;
	size_t counter = 0;
	size_t new_count;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		counter++;
		tmp = tmp->next;
		loop_node = head;
		new_count = 0;
		while (new_count < counter)
		{
			if (tmp == loop_node)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (counter);
			}
			loop_node = loop_node->next;
			new_count++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
