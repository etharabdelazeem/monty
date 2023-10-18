#include "monty.h"

int fun(char line[], unsigned int *line_count)
{
	*line_count += 1;
	printf("%d %s\n", *line_count, line);
	return (1);
}

/**
 * execute - function to execute the opcode
 * @file: the monty file
 * @stack: The stack
 * @
 * @
 *
 * Return: 0 on failure - 1 on success
 */
int execute(FILE *file, stack_t **stack)
{
	instruction_t opset[] = {
		{"push", push}, {"pall", pall},
		/* {"pint", pint}, */
		{NULL, NULL}
	};
	unsigned int i = 0, *line_count = 0;
	char *opcod = 0, line[BUFFER];

	/* opcode = strtok(content of the file ??, " \n\t");*/
	fgets(line, BUFFER, file);
	fun(line, line_count);
	if (!opcod) /*if we reach end of file or no opcodes in the file*/
		return (EXIT_SUCCESS);
	while (opset[i].opcode && opcod)
	{
		if (strcmp(opcod, opset[i].opcode) == 0)
		{
			opset[i].f(stack, *line_count);
			return (0);
		}
		i++;
	}

	if (opcod && opset[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", *line_count, opcod);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	return (1);
}
