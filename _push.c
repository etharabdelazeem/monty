#include "monty.h"

/**
 * push - push into stack
 * @stack: to push into
 * @line_number: line count
 */
void push(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	if (data.arg)
		push_stack(stack);
	else
	{
		printf("L<%d>: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
}
