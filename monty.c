#include "monty.h"

/**
 * main - interpreter for Monty ByteCodes files.
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0 if ok
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *file_name = NULL;
	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{NULL, NULL}
	};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_name = argv[1];
	file = fopen(file_name, "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
	}
	get_opcode(file, ops);
	fclose(file);
	return (0);
}
