#include "monty.h"

/**
 * f_stack - Sets the stack mode (LIFO - Last In, First Out).
 * @head: Stack head
 * @counter: Line number (unused)
 */

void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
