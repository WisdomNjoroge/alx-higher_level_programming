#include "lists.h"

/**
 * check-cycle - checks if a single linked list contains a cycle
 * @list: a singly-linked list
 * Return: if there is no cycle - 0, if there is - 1
 */
int check_cycle(listint_t *list)
{
	listint_t *fast, *slow;

	if (!list || !list->next)
		return (0);

	fast = list;
	slow = list;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (1);
		}
	}
	return (0);
}
