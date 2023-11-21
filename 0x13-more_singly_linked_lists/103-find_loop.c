#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sukuna, *gojo;

	sukuna = gojo = head;
	while (sukuna && gojo && gojo->next)
	{
		sukuna = sukuna->next;
		gojo = gojo->next->next;
		if (sukuna == gojo)
		{
			sukuna = head;
			break;
		}
	}
	if (!sukuna || !gojo || !gojo->next)
		return (NULL);
	while (sukuna != gojo)
	{
		sukuna = sukuna->next;
		gojo = gojo->next;
	}
	return (gojo);
}
