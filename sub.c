#include "monty.h"

/**
 * f_sub - Subtracts the top element of the stack from the second top element.
 * @head: Stack head
 * @counter: Line number
 */

void f_sub(stack_t **head, unsigned int counter)
{
	int sub;
	int nodes;
	stack_t *a = *head;

	for (nodes = 0; a != NULL; nodes++)
		a = a->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	sub = a->next->n - a->n;
	a->next->n = sub;
	*head = a->next;
	free(a);
}
