#include "monty.h"

/**
 * f_mul - Multiplies the top two elements of the stack.
 * @head: Stack head
 * @counter: Line number
 */

void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int l = 0;
	int a;

	h = *head;
	while (h)
	{
		h = h->next;
		l++;
	}

	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	h = *head;
	a = h->next->n * h->n;
	h->next->n = a;
	*head = h->next;
	free(h);
}
