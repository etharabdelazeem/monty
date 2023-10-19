#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: the head of the stack(linked list)
 * @linecount: the line counter
 *
 * Return: nothing
 */
void rotr(stack_t **stack, unsigned int __attribute__((unused)) linecount)
{
	stack_t *new_head = *stack;

	if (!*stack || !(*stack)->next)
		return;

	while (new_head->next)
	{
		new_head = new_head->next;
	}

	new_head->next = *stack;
	new_head->prev->next = NULL;
	new_head->prev = NULL;
	(*stack)->prev = new_head;
	(*stack) = new_head;
}
