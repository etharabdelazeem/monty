#include "monty.h"

/**
 * pchar - prints the char at the top of the stack
 * @stack: head of the stack (linked list)
 * @linecount: the line counter
 *
 * Return: nothing
 */
void pchar(stack_t **stack, unsigned int linecount)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", linecount);
		exit(EXIT_FAILURE);
		return;
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", linecount);
		exit(EXIT_FAILURE);
		return;
	}
	printf("%c\n", (*stack)->n);
}
