#include "lists.h"

/**
 * delete_nodeint_at_index - Delete idx node
 * @head: head list pointer
 * @index: Index to delete
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *current = *head;
	listint_t *previous = *head;

	if ((*head == NULL) || (head == NULL))
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (previous)
	{
		if (count == index)
		{
			current = previous->next;
			previous->next = current->next;
			free(current);
			return (1);
		}
		previous = previous->next;
		count++;
	}
	return (-1);
}
