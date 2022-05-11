#include "monty.h"

/**
 *_add - adds the top two elements of the stack.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _add(stack_t **stack, unsigned int line_number)
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	num1 = (*stack)->n;
	num2 = (*stack)->next->n;
	sum = num1 + num2;
	_pop(stack, line_number);
	(*stack)->n = sum;
}

/**
 *_nop - The opcode nop doesn’t do anything.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _nop(stack_t **stack, unsigned int line_number)
{
	(void) (*stack);
	(void) line_number;
}

/**
 *_sub - sub the top element of the stack from the second top element.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _sub(stack_t **stack, unsigned int line_number)
{
	int num1 = 0;
	int num2 = 0;
	int sub = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	num1 = (*stack)->n;
	num2 = (*stack)->next->n;
	sub = num2 - num1;
	_pop(stack, line_number);
	(*stack)->n = sub;
}

/**
 *_div - divides the second top element of the stack by the top element.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _div(stack_t **stack, unsigned int line_number)
{
	int num1 = 0;
	int num2 = 0;
	int div = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	num1 = (*stack)->n;
	if (num1 == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	num2 = (*stack)->next->n;
	div = num2 / num1;
	_pop(stack, line_number);
	(*stack)->n = div;
}
