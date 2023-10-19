#include "monty.h"

/**
 * mul - multiplies the second top element of the stack with the top element.
 * @stack: to multiply its elements
 * @line_number: line counter
 * Return: nothing or exit failure if we have less than 2 elements in the stack
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *head2;

	if (!head || !head->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(data.file);
		free(data.line);
		freestack(*stack);
		exit(EXIT_FAILURE);
	}

	head2 = head->next;
	head2->n = head2->n * head->n;

	free(head);
	*stack = head2;
	if (!(*stack))
		return;
	(*stack)->prev = NULL;

}
