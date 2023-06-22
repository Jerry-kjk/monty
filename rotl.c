#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @head: Stack head
 * @counter: Line number (unused)
 */

void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head;
	stack_t *a;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	a = (*head)->next;
	a->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = a;
}
