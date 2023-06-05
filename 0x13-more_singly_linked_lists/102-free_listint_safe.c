#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list and sets the head to NULL
 * @h: Double pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next = NULL;
	size_t size = 0;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
		size++;
	}

	*h = NULL;
	return (size);
}
