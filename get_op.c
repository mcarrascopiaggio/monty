#include "monty.h"
#include <stdio.h>

/**
 *get_opcode - function that gets the right function
 *@file: pointer to all content from file
 *@ops: initialaized structure
 *Return: 0
 */

int get_opcode(FILE *file, instruction_t ops[])
{
	int i = 0, flag = 0;
	char *tok = NULL, *str = NULL;
	stack_t *stack = NULL;
	unsigned int line = 0;
	size_t size = 0;

	while (1)
	{
		if (getline(&str, &size, file) == -1)
		{
			free(str);
			break;
		}
		line++;
		tok = strtok(str, DELIM);
		i = 0;
		flag = 0;
		if (tok)
		{
			while (ops[i].opcode)
			{
				if (strlen(tok) == strlen(ops[i].opcode) &&
						strcmp(tok, ops[i].opcode) == 0)
				{
					ops[i].f(&stack, line);
					flag = 1;
				}
				i++;
			}
			if (flag == 0)
			{
				fprintf(stderr, "L%d: unknown instruction %s\n", line, tok);
				_free_errors(str, file, stack);
				exit(EXIT_FAILURE);
			}
		}
	}
	free_stackt(stack);
	return (0);
}

/**
 * _free_errors - frees str and closes file
 * @str: pointer to string
 * @file: file
 * @stack: pointer to stack
 */
void _free_errors(char *str, FILE *file, stack_t *stack)
{
	free(str);
	fclose(file);
	free_stackt(stack);
}

/**
 *error - things to do if the error
 *@str: second
 *@file: file
 *@stack: stack
 */

void error(char *str, FILE *file, stack_t *stack)
{
	_free_errors(str, file, stack);
	exit(EXIT_FAILURE);

}
