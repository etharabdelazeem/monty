#include "monty.h"

/**
 * mallocerror - prints error message
 * Return: nothing
 */
void mallocerror(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * _stack - changes to stack mode\ sets the sq_flag
 * @stack: head of the linked list
 * @linecount: the linecounter
 *
 * Return: nothing
 */
void _stack(stack_t **stack, unsigned int linecount)
{
	(void)stack;
	(void)linecount;

	data.sq_flag = 0;
}

/**
 * push_stack - push int to the stack
 * @head: the stack head
 */
void push_stack(stack_t **head)
{
	stack_t *new, *temp = *head;

	new = malloc(sizeof(stack_t));
	if (!new)
		mallocerror();
	if (temp)
		temp->prev = new;
	new->n = atoi(data.arg);
	new->next = temp;
	new->prev = NULL;
	*head = new;
}

/**
 * freestack - free the contents of the stack
 * @head: of the stack to be freed
 * Return: nothing
 */
void freestack(stack_t *head)
{
	stack_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
