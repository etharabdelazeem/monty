#include "monty.h"

/**
 * execute - function to execute the opcode
 * @file: the monty file
 * @stack: The stack
 * @count: line count
 * @line: content of a single line
 *
 * Return: 0 on failure - 1 on success
 */
int execute(FILE *file, stack_t **stack, unsigned int count, char *line)
{
	instruction_t opset[] = {
		{"push", push}, {"pall", pall}, {"pint", pint},
		{"pop", pop}, {"swap", swap}, {"nop", nop},
		{"add", add}, {"sub", sub}, {"div", divide},
		{"mul", mul}, {"mod", mod}, {"pchar", pchar},
		{"pstr", pstr}, {"rotl", rotl}, {"rotr", rotr},
		{"stack", _stack}, {"queue", queue},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *opcod;

	opcod = strtok(line, " \n\t");
	if (!opcod || opcod[0] == '#')
		return (1);
	data.arg = strtok(NULL, " \n\t");
	while (opset[i].opcode && opcod)
	{
		if (strcmp(opcod, opset[i].opcode) == 0)
		{
			opset[i].f(stack, count);
			return (0);
		}
		i++;
	}

	if (opcod && opset[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", count, opcod);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	return (1);
}
