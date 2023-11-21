#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list.
 * @h: head pointer
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++)
	{
		h = h->next;
	}
	return (c);
}
