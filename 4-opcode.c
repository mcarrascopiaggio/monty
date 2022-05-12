#include "monty.h"

/**
 *_rotl - The opcode rotl rotates the stack to the top.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *n_first = NULL;
	stack_t *n_end = NULL;
	stack_t *temp = NULL;
	(void) line_number;

	if (stack == NULL || *stack == NULL)
	{
		return;
	}
	n_first = *stack;
	n_end = *stack;

	while (n_first->next)
	{
		n_first = n_first->next;
	}
	temp = n_first->prev;
	n_first->prev = NULL;
	n_first->next = n_end->next;
	n_end->prev = temp;
	n_end->next = NULL;
}
