#include "monty.h"

/**
 *_rotl - The opcode rotl rotates the stack to the top.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *head = NULL;
	stack_t *temp = NULL;
	(void) line_number;

	if (stack == NULL || *stack == NULL)
	{
		return;
	}
	head = (*stack)->next;
	temp = *stack;

	while (temp->next)
	{
		head->prev = NULL;
		temp->next = *stack;
		(*stack)->next = NULL;
		(*stack)->prev = temp;
		*stack = head;
	}
}
