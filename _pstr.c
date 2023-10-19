#include "monty.h"

/**
 * pstr - prints the string at the top of the stack
 * @stack: head of the stack (linked list)
 * @linecount: the line counter
 *
 * Return: nothing
 */
void pstr(stack_t **stack, unsigned int __attribute__((unused)) linecount)
{
	stack_t *head = *stack;

	while (head)
	{
		if (head->n > 127 || head->n <= 0)
			break;
		putchar((char) head->n);
		head = head->next;
	}
	putchar('\n');
}
