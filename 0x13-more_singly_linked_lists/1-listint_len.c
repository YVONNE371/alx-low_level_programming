#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: list pointer head
 *
 * Return: No. of elemts
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = h;

	if (ptr != NULL)
	{
		while (ptr != NULL)
		{
			count++;
			ptr = ptr->next;
		}
	}

	return (count);
}
