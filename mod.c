#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */

void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;
	int l = 0;
	int a;

	while (h)
	{
		h = h->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		exit(EXIT_FAILURE);
	}

	a = h->next->n % h->n;
	h->next->n = a;
	*head = h->next;
	free(h);
}
