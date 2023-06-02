#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: The head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t node_count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		node_count++;
		ptr = ptr->next;
	}

	return (node_count);
}
