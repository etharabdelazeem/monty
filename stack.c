#include "monty.h"

/**
 * mallocerror - prints error message
 * Return: nothing
 */
void mallocerror(void)
{
	fprintf(stderr, "Malloc error\n");
	exit(EXIT_FAILURE);
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
