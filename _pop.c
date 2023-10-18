#include "monty.h"

/**
* pop - removes the first element from the stack(linked list)
* @stack: head of the linked list
* @linecount: line counter
*
* Return: nothing
*/
void pop(stack_t **stack, unsigned int linecount)
{
	stack_t *tmp = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", linecount);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
	if (!*stack)
		return;
	(*stack)->prev = NULL;
}
