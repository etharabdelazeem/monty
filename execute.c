#include "monty.h"

/**
 * execute - function to execute the opcode
 * @file: the monty file
 * @
 * @
 * @
 *
 * Return: nothing
 */
void execute(FILE *file, , , )
{
	instruction_t opset[] = {
		{"push", push}, {"pall", pall}, {"pint", pint},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *opcod;

	opcode = strtok(/*content of the file ??*/, " \n\t");
	
	while (opset[i].opcode && opcod)
	{
		if (strcmp(opcod, opset[i].opcode) == 0)
		{
			opset[i].f(/* arguments hina*/);
			return (0);
		}
		i++;
	}

	if (opcod && opset[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", /*need a counter??*/, opcod);
		fclose(file);
		exit(EXIT_FAILURE); }
	return (1);
}
