#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: pointer of the first node
 * @index: index is the index of the node
 *
 * Return: nth node of listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;
	while (i < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
	}
	return (head);
}
