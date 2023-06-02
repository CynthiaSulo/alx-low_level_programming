#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: The address of the head of the linked list.
 * @str: The string to be duplicated and added as the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	unsigned int len;
	list_t *new_node, *last_node;

	duplicate = strdup(str);
	if (duplicate == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(duplicate);
		return (NULL);
	}

	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
		len++;

	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
