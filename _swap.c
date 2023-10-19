#include "monty.h"

/**
 * swap - swaps first two elements of the stack (linked list)
 * @stack: head of the linked list
 * @linecount: the line counter
 *
 * Return: nothing
 */
void swap(stack_t **stack, unsigned int linecount)
{
	stack_t *tmp_stack = NULL;
	int tmp_int = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", linecount);
		exit(EXIT_FAILURE);
	}
	tmp_stack = *stack;
	tmp_int = tmp_stack->n;
	tmp_stack->n = tmp_stack->next->n;
	tmp_stack->next->n = tmp_int;
}
