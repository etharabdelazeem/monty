#include "monty.h"

/**
 * add - adds the first two elements of the stack (linked list)
 * @stack head of the linked list
 * @linecount: the line counter
 *
 * Return: nothing
 */
void add(stack_t **stack, unsigned int linecount)
{
	int sum;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", linecount);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->next->n;
	pop(stack, linecount);
	(*stack)->n = sum;
}
