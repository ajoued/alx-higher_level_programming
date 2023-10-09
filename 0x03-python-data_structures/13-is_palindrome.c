#include "lists.h"

listint_t *reverse_list(listint_t **h);
int is_palindrome(listint_t **h);

/**
 * reverse_list - Reverses a list.
 * @h: A pointer to the starting node of the list to reverse.
 * Return: A pointer to the h of the reversed list.
 */
listint_t *reverse_list(listint_t **h)
{
	listint_t *node = *h, *next, *prev = NULL;

	while (node)
	{
		next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}

	*h = prev;
	return (*h);
}

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: A pointer to the h of the linked list.
 * Return: If the linked list is not a palindrome - 0.
 * If the linked list is a palindrome - 1.
 */
int is_palindrome(listint_t **head)
{
	listint_t *tmp, *rev, *mid;
	size_t size = 0, i;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	tmp = *head;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}

	tmp = *head;
	for (i = 0; i < (size / 2) - 1; i++)
		tmp = tmp->next;

	if ((size % 2) == 0 && tmp->n != tmp->next->n)
		return (0);

	tmp = tmp->next->next;
	rev = reverse_list(&tmp);
	mid = rev;

	tmp = *head;
	while (rev)
	{
		if (tmp->n != rev->n)
			return (0);
		tmp = tmp->next;
		rev = rev->next;
	}
	reverse_list(&mid);

	return (1);
}
