#include "monty.h"

/**
 * f_swap - Swaps the top two elements of the stack.
 * @head: Stack head
 * @counter: Line number
 */

void f_swap(stack_t **head, unsigned int counter)
{
	int l = 0;
	int a;
	stack_t *h = *head;

	while (h)
	{
		h = h->next;
		l++;
	}

	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	a = h->n;
	h->n = h->next->n;
	h->next->n = a;
}
