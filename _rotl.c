#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: the head of the stack(linked list)
 * @linecount: the line counter
 *
 * Return: nothing
 */
void rotl(stack_t **stack, unsigned int __attribute__((unused)) linecount)
{
	stack_t *tmp = *stack, *new_head;

	if (!*stack || !(*stack)->next)
		return;
	new_head = (*stack)->next;
	new_head->prev = NULL;
	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = *stack;

	(*stack)->next = NULL;
	(*stack)->prev = tmp;
	(*stack) = new_head;
}
