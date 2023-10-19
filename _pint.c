#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: head of the linked list
 * @linecount: line counter
 *
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int linecount)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", linecount);
		exit(EXIT_FAILURE);

	}
	printf("%d\n", (*stack)->n);
}
