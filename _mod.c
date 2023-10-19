#include "monty.h"

/**
 * mod -  computes the rest of the division of the second top element by the
 * top element.
 * @stack: to divide its elements and find modulus
 * @line_number: line counter
 *
 * Return: nothing or exit failure if we have less than 2 elements in the stack
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *head2;

	if (!head || !head->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		fclose(data.file);
		free(data.line);
		freestack(*stack);
		exit(EXIT_FAILURE);
	}

	head2 = head->next;
	if (head->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	head2->n = head2->n % head->n;

	free(head);
	*stack = head2;
	if (!(*stack))
		return;
	(*stack)->prev = NULL;

}
