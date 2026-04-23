#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - counts the number of unique nodes
 * in a looped list_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of unique nodes, or 0 if the list is not looped
 */
size_t looped_listint_len(const list_t *head)
{
	const list_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}
			return (nodes);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}
