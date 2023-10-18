#include "monty.h"

/**
 * pall - display stack
 * @stack: to be diplayed
 * @line_number: line count
 */
void pall(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	stack_t *head = *stack;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
