#include "monty.h"

/**
 * sub - subtract the top element of the stack from the second top element.
 * @stack: to sub its elements
 * @line_number: line counter
 * Return: nothing or exit failure if we have less than 2 elements in the stack
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *head2;

	if (!head || !head->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short", line_number);
		/*fclose(data.file);*/
		/*free(data.line);*/
		/*freestack(*stack);*/
		exit(EXIT_FAILURE);
	}

	head2 = head->next;
	head2->n = head2->n - head->n;

	free(head);
	*stack = head2;
	if (!(*stack))
		return;
	(*stack)->prev = NULL;

}
