#include "lists.h"
#include <stdio.h>

/**
 * check_cycle - checks if there is a cycle in a linked list
 * @list: list to be treated
 * Return: 1 if there is a cycle 0 otherwise
*/
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (list == NULL)
		return (0);

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
