#include "lists.h"

/**
 * reverse_list - Reverses a linked list in place.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Pointer to the new head of the reversed list.
 */
listint_t *reverse_list(listint_t *head)
{
	listint_t *prev = NULL;
	listint_t *current = head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	return (prev);
}

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: Pointer to the head of the linked list.
 *
 * Return: 1 if it is a palindrome, 0 otherwise.
 */
int is_palindrome(listint_t **head)
{
	listint_t *slowptr = *head;
	listint_t *fastptr = *head;
	listint_t *second_half = NULL;
	listint_t *temp = NULL;

	while (fastptr != NULL && fastptr->next != NULL)
	{
		slowptr = slowptr->next;
		fastptr = fastptr->next->next;
	}

	second_half = reverse_list(slowptr);
	temp = second_half;

	while (*head != NULL && temp != NULL)
	{
		if ((*head)->n != temp->n)
			return (0);

		*head = (*head)->next;
		temp = temp->next;
	}

	return (1);
}
