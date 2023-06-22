#include "monty.h"

/**
 * f_queue - sets the format of the data to a queue (FIFO)
 * @head: stack head
 * @counter: line number
 * Return: no return
 */

void f_queue(stack_t **head, unsigned int counter)
{
	(void)counter;
	(void)head;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node;
	stack_t *a = *head;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (a)
	{
		while (a->next)
		{
			a = a->next;
		}
	}
	if (!a)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		a->next = new_node;
		new_node->prev = a;
	}
}
