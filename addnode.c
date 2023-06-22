#include "monty.h"

/**
 * addnode - add node to the head of the stack
 * @head: head of the stack
 * @n: new_value
 */

void addnode(stack_t **head, int n)
{
	stack_t *new_node;
	stack_t *a = *head;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (a)
		a->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
