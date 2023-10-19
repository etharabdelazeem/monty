#include "monty.h"

/**
 * push - push into stack
 * @stack: to push into
 * @linecount: line count
 */
void push(stack_t **stack, unsigned int  linecount)
{
	int i = 0;

	if (data.arg)
	{
		if (data.arg[0] == '-')
			i++;
		for (; data.arg[i] != '\0'; i++)
		{
			if (data.arg[i] < 48 || data.arg[i] > 57)
			{
				fprintf(stderr, "L%d: usage: push integer\n", linecount);
				fclose(data.file);
				free(data.line);
				freestack(*stack);
				exit(EXIT_FAILURE);
			}
		}
		push_stack(stack);
	}
		else
	{
		fprintf(stderr, "L%d: usage: push integer\n", linecount);
		fclose(data.file);
		free(data.line);
		freestack(*stack);
		exit(EXIT_FAILURE);
	}
}
